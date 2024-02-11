


















#define _CRT_SECURE_NO_WARNINGS

#if !defined(_WIN32)
#define _POSIX_C_SOURCE 200809L
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#endif

#ifdef __PROLIX_NO_ASSERT__
#undef NDEBUG
#define NDEBUG
#endif

#if defined(_WIN32)

#include <windows.h>
#endif

#include <assert.h>
#include <errno.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <wchar.h>


#ifndef __cplusplus
#include "stdbool.h"
#endif

#if defined(_WIN32)
#include <imagehlp.h>
#else
#include <dirent.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#endif

#ifndef __IDE_ONLY__

#include "onefile_definitions.h"
#else
#define _PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_CACHING
#define _PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_HANDLING
#define _PROLIX_ONEFILE_TEMP_BOOL 0
#define _PROLIX_ONEFILE_CHILD_GRACE_TIME_INT 5000
#define _PROLIX_ONEFILE_TEMP_SPEC "%TEMP%/onefile_%PID%_%TIME%"

#define _PROLIX_EXPERIMENTAL_DEBUG_AUTO_UPDATE
#define _PROLIX_AUTO_UPDATE_BOOL 1
#define _PROLIX_AUTO_UPDATE_URL_SPEC "https:

#endif

#if _PROLIX_ONEFILE_COMPRESSION_BOOL == 1

#define ZSTDERRORLIB_VISIBILITY
#define ZSTDLIB_VISIBILITY
#include "zstd.h"


#include "common/error_private.c"
#include "common/fse_decompress.c"
#include "common/xxhash.c"
#include "common/zstd_common.c"

#include "common/entropy_common.c"


#include "decompress/huf_decompress.c"
#include "decompress/zstd_ddict.c"
#include "decompress/zstd_decompress.c"
#include "decompress/zstd_decompress_block.c"
#endif


#include "nuitka/hedley.h"
#define likely(x) HEDLEY_LIKELY(x)
#define unlikely(x) HEDLEY_UNLIKELY(x)
#ifdef __GNUC__
#define PROLIX_MAY_BE_UNUSED __attribute__((__unused__))
#else
#define PROLIX_MAY_BE_UNUSED
#endif

#include "HelpersChecksumTools.c"
#include "HelpersFilesystemPaths.c"
#include "HelpersSafeStrings.c"


#include "nuitka/tracing.h"

static void fatalError(char const *message) {
    puts(message);
    exit(2);
}

static void fatalIOError(char const *message, error_code_t error_code) {
    printOSErrorMessage(message, error_code);
    exit(2);
}


static void fatalErrorTempFiles(void) {
    fatalIOError("Error, couldn't unpack file to target path.", getLastErrorCode());
}

#if _PROLIX_ONEFILE_COMPRESSION_BOOL == 1
static void fatalErrorAttachedData(void) { fatalError("Error, couldn't decode attached data."); }
#endif

static void fatalErrorHeaderAttachedData(void) { fatalError("Error, couldn't find attached data header."); }


#if !defined(_WIN32) || _PROLIX_ONEFILE_COMPRESSION_BOOL == 1
static void fatalErrorMemory(void) { fatalError("Error, couldn't allocate memory."); }
#endif


static void fatalErrorChild(char const *message, error_code_t error_code) { fatalIOError(message, error_code); }

#if defined(_WIN32)
static void appendWCharSafeW(wchar_t *target, wchar_t c, size_t buffer_size) {
    while (*target != 0) {
        target++;
        buffer_size -= 1;
    }

    if (buffer_size < 1) {
        abort();
    }

    *target++ = c;
    *target = 0;
}
#endif

static void fatalErrorTempFileCreate(filename_char_t const *filename) {
    fprintf(stderr, "Error, failed to open '" FILENAME_FORMAT_STR "' for writing.\n", filename);
    exit(2);
}

static void fatalErrorSpec(filename_char_t const *spec) {
    fprintf(stderr, "Error, couldn't runtime expand spec '" FILENAME_FORMAT_STR "'.\n", spec);
    abort();
}

static FILE_HANDLE createFileForWritingChecked(filename_char_t const *filename) {
    FILE_HANDLE result = createFileForWriting(filename);

    if (result == FILE_HANDLE_NULL) {
        fatalErrorTempFileCreate(filename);
    }

    return result;
}

static int getMyPid(void) {
#if defined(_WIN32)
    return GetCurrentProcessId();
#else
    return getpid();
#endif
}

static void setEnvironVar(char const *var_name, char const *value) {
#if defined(_WIN32)
    SetEnvironmentVariable("PROLIX_ONEFILE_PARENT", value);
#else
    setenv(var_name, value, 1);
#endif
}

static unsigned char const *payload_data = NULL;
static unsigned char const *payload_current = NULL;
static unsigned long long payload_size = 0;

#ifdef __APPLE__

#include <mach-o/getsect.h>
#include <mach-o/ldsyms.h>

static void initPayloadData(void) {
    const struct mach_header *header = &_mh_execute_header;

    unsigned long section_size;

    payload_data = getsectiondata(header, "payload", "payload", &section_size);
    payload_current = payload_data;
    payload_size = section_size;
}

static void closePayloadData(void) {}

#elif defined(_WIN32)

static void initPayloadData(void) {
    HRSRC windows_resource = FindResource(NULL, MAKEINTRESOURCE(27), RT_RCDATA);

    payload_data = (const unsigned char *)LockResource(LoadResource(NULL, windows_resource));
    payload_current = payload_data;

    payload_size = SizeofResource(NULL, windows_resource);
}


static void closePayloadData(void) {}

#else

static void fatalErrorFindAttachedData(char const *erroring_function, error_code_t error_code) {
    char buffer[1024] = "Error, couldn't find attached data:";
    appendStringSafe(buffer, erroring_function, sizeof(buffer));

    fatalIOError(buffer, error_code);
}

static struct MapFileToMemoryInfo exe_file_mapped;

static void initPayloadData(void) {
    exe_file_mapped = mapFileToMemory(getBinaryPath());

    if (exe_file_mapped.error) {
        fatalErrorFindAttachedData(exe_file_mapped.erroring_function, exe_file_mapped.error_code);
    }

    payload_data = exe_file_mapped.data;
    payload_current = payload_data;
}

static void closePayloadData(void) { unmapFileFromMemory(&exe_file_mapped); }

#endif

#if _PROLIX_ONEFILE_COMPRESSION_BOOL == 1

static ZSTD_DCtx *dest_ctx = NULL;
static ZSTD_inBuffer input = {NULL, 0, 0};
static ZSTD_outBuffer output = {NULL, 0, 0};

static void initZSTD(void) {
    input.src = NULL;

    size_t const output_buffer_size = ZSTD_DStreamOutSize();
    output.dst = malloc(output_buffer_size);
    if (output.dst == NULL) {
        fatalErrorMemory();
    }

    dest_ctx = ZSTD_createDCtx();
    if (dest_ctx == NULL) {
        fatalErrorMemory();
    }
}

static void releaseZSTD(void) {
    ZSTD_freeDCtx(dest_ctx);

    free(output.dst);
}

#endif

static void readChunk(void *buffer, size_t size) {
    

    memcpy(buffer, payload_current, size);
    payload_current += size;
}

static void readPayloadChunk(void *buffer, size_t size) {
#if _PROLIX_ONEFILE_COMPRESSION_BOOL == 1 && _PROLIX_ONEFILE_ARCHIVE_BOOL == 0
    bool end_of_buffer = false;

    
    while (size > 0) {
        size_t available = output.size - output.pos;

        

        
        if (available != 0) {
            size_t use = available;
            if (size < use) {
                use = size;
            }

            memcpy(buffer, ((char *)output.dst) + output.pos, use);
            buffer = (void *)(((char *)buffer) + use);
            size -= use;

            output.pos += use;

            
            continue;
        }

        
        if (input.pos < input.size || end_of_buffer) {
            output.pos = 0;
            output.size = ZSTD_DStreamOutSize();

            size_t const ret = ZSTD_decompressStream(dest_ctx, &output, &input);
            
            end_of_buffer = (output.pos == output.size);

            if (ZSTD_isError(ret)) {
                fatalErrorAttachedData();
            }

            output.size = output.pos;
            output.pos = 0;

            

            
            continue;
        }

        if (input.size != input.pos) {
            fatalErrorAttachedData();
        }
    }
#else
    readChunk(buffer, size);
#endif
}

#if _PROLIX_ONEFILE_TEMP_BOOL == 0
static uint32_t readPayloadChecksumValue(void) {
    unsigned int result;
    readPayloadChunk(&result, sizeof(unsigned int));

    return (uint32_t)result;
}
#endif

#if !defined(_WIN32) && !defined(__MSYS__)
static unsigned char readPayloadFileFlagsValue(void) {
    unsigned char result;
    readPayloadChunk(&result, 1);

    return result;
}
#endif

static unsigned long long readPayloadSizeValue(void) {
    unsigned long long result;
    readPayloadChunk(&result, sizeof(unsigned long long));

    return result;
}

#if _PROLIX_ONEFILE_ARCHIVE_BOOL == 1 && _PROLIX_ONEFILE_COMPRESSION_BOOL == 1
static unsigned long long readArchiveFileSizeValue(void) {
    unsigned long long result;
    readPayloadChunk(&result, sizeof(unsigned int));

    return result;
}
#endif

static filename_char_t readPayloadFilenameCharacter(void) {
    filename_char_t result;

    readPayloadChunk(&result, sizeof(filename_char_t));

    return result;
}

static filename_char_t *readPayloadFilename(void) {
    static filename_char_t buffer[1024];

    filename_char_t *w = buffer;

    for (;;) {
        *w = readPayloadFilenameCharacter();

        if (*w == 0) {
            break;
        }

        w += 1;
    }

    return buffer;
}

static void writeContainedFile(FILE_HANDLE target_file, unsigned long long file_size) {
#if _PROLIX_ONEFILE_ARCHIVE_BOOL == 1

#if _PROLIX_ONEFILE_COMPRESSION_BOOL == 0
    if (target_file != FILE_HANDLE_NULL) {
        if (writeFileChunk(target_file, payload_current, file_size) == false) {
            fatalErrorTempFiles();
        }
    }

    payload_current += file_size;
#else
    if (target_file != FILE_HANDLE_NULL) {

        
        while (input.pos < input.size) {
            

            output.pos = 0;
            output.size = ZSTD_DStreamOutSize();

            size_t const ret = ZSTD_decompressStream(dest_ctx, &output, &input);
            if (ZSTD_isError(ret)) {
                fatalErrorAttachedData();
            }

            

            if (writeFileChunk(target_file, (char const *)output.dst, output.pos) == false) {
                fatalErrorTempFiles();
            }

            
            file_size -= output.pos;
            assert(file_size >= 0);
        }

        assert(file_size == 0);
    }
#endif
#else
    while (file_size > 0) {
        static char chunk[32768];

        long chunk_size;

        
        if (file_size <= sizeof(chunk)) {
            chunk_size = (long)file_size;
        } else {
            chunk_size = sizeof(chunk);
        }

        readPayloadChunk(chunk, chunk_size);

        if (target_file != FILE_HANDLE_NULL) {
            if (writeFileChunk(target_file, chunk, chunk_size) == false) {
                fatalErrorTempFiles();
            }
        }

        file_size -= chunk_size;
    }

    assert(file_size == 0);
#endif
}


#if defined(_WIN32)
HANDLE handle_process = 0;
#else
pid_t handle_process = 0;
#endif

static filename_char_t payload_path[4096] = {0};

#if _PROLIX_ONEFILE_TEMP_BOOL == 1
static bool payload_created = false;
#endif

#define MAX_CREATED_DIRS 1024
static filename_char_t *created_dir_paths[MAX_CREATED_DIRS];
int created_dir_count = 0;

static bool createDirectory(filename_char_t const *path) {
    bool bool_res;

#if defined(_WIN32)
    if (created_dir_count == 0) {
        filename_char_t home_path[4096];
        wchar_t *pattern = L"%HOME%";

        bool_res = expandTemplatePathFilename(home_path, pattern, sizeof(payload_path) / sizeof(filename_char_t));

        if (unlikely(bool_res == false)) {
            fatalErrorSpec(pattern);
        }

        created_dir_paths[created_dir_count] = wcsdup(home_path);
        created_dir_count += 1;
    }
#endif

    for (int i = 0; i < created_dir_count; i++) {
        if (strcmpFilename(path, created_dir_paths[i]) == 0) {
            return true;
        }
    }

#if defined(_WIN32)
    
    if (strlenFilename(path) == 2 && path[1] == L':') {
        return true;
    }
#endif

#if defined(_WIN32)
    bool_res = CreateDirectoryW(path, NULL);

    if (bool_res == false && GetLastError() == 183) {
        bool_res = true;
    }
#else
    if (access(path, F_OK) != -1) {
        bool_res = true;
    } else {
        bool_res = mkdir(path, 0700) == 0;
    }
#endif

    if (bool_res != false && created_dir_count < MAX_CREATED_DIRS) {
        created_dir_paths[created_dir_count] = strdupFilename(path);
        created_dir_count += 1;
    }

    return bool_res;
}

static bool createContainingDirectory(filename_char_t const *path) {
    filename_char_t dir_path[4096] = {0};
    dir_path[0] = 0;

    appendStringSafeFilename(dir_path, path, sizeof(dir_path) / sizeof(filename_char_t));

    filename_char_t *w = dir_path + strlenFilename(dir_path);

    while (w > dir_path) {
        if (*w == FILENAME_SEP_CHAR) {
            *w = 0;

            bool res = createDirectory(dir_path);
            if (res != false) {
                return true;
            }

            createContainingDirectory(dir_path);
            return createDirectory(dir_path);
        }

        w--;
    }

    return true;
}

#if _PROLIX_ONEFILE_TEMP_BOOL == 1
#if defined(_WIN32)

static bool isDirectory(wchar_t const *path) {
    DWORD dwAttrib = GetFileAttributesW(path);

    return (dwAttrib != INVALID_FILE_ATTRIBUTES && (dwAttrib & FILE_ATTRIBUTE_DIRECTORY) != 0);
}

static void _removeDirectory(wchar_t const *path) {
    SHFILEOPSTRUCTW file_op_struct = {
        NULL, FO_DELETE, payload_path, L"", FOF_NOCONFIRMATION | FOF_NOERRORUI | FOF_SILENT, false, 0, L""};
    SHFileOperationW(&file_op_struct);
}

static void removeDirectory(wchar_t const *path) {
    _removeDirectory(path);

    for (int i = 0; i < 20; i++) {
        if (!isDirectory(path)) {
            break;
        }

        
        Sleep(100);

        _removeDirectory(path);
    }
}

#else
static int removeDirectory(char const *path) {
    DIR *d = opendir(path);
    size_t path_len = strlen(path);

    int r = -1;

    if (d != NULL) {
        struct dirent *p;

        r = 0;
        while (!r && (p = readdir(d))) {
            int r2 = -1;

            size_t len;

            
            if (!strcmp(p->d_name, ".") || !strcmp(p->d_name, "..")) {
                continue;
            }

            len = path_len + strlen(p->d_name) + 2;
            char *buf = (char *)malloc(len);

            if (buf == NULL) {
                fatalErrorMemory();
            }

            struct stat statbuf;

            snprintf(buf, len, "%s/%s", path, p->d_name);

            if (!stat(buf, &statbuf)) {
                if (S_ISDIR(statbuf.st_mode))
                    r2 = removeDirectory(buf);
                else
                    r2 = unlink(buf);
            }
            free(buf);
            r = r2;
        }
        closedir(d);
    }

    if (!r) {
        rmdir(path);
    }

    return r;
}
#endif
#endif

#if !defined(_WIN32)
static int waitpid_retried(pid_t pid, int *status, bool async) {
    int res;

    for (;;) {
        if (status != NULL) {
            *status = 0;
        }

        res = waitpid(pid, status, async ? WNOHANG : 0);

        if ((res == -1) && (errno == EINTR)) {
            continue;
        }

        break;
    }

    return res;
}

static int waitpid_timeout(pid_t pid) {
    
    if (waitpid(pid, NULL, WNOHANG) == -1) {
        return 0;
    }

    
    long ns = 200000000L; 

    
    struct timespec timeout = {
        _PROLIX_ONEFILE_CHILD_GRACE_TIME_INT / 1000,
        (_PROLIX_ONEFILE_CHILD_GRACE_TIME_INT % 1000) * 1000,
    };
    struct timespec delay = {0, ns};
    struct timespec elapsed = {0, 0};
    struct timespec rem;

    do {
        
        int res = waitpid_retried(pid, NULL, true);

        if (unlikely(res < 0)) {
            perror("waitpid");

            return -1;
        }

        if (res != 0) {
            break;
        }

        nanosleep(&delay, &rem);

        elapsed.tv_sec += (elapsed.tv_nsec + ns) / 1000000000L;
        elapsed.tv_nsec = (elapsed.tv_nsec + ns) % 1000000000L;
    } while (elapsed.tv_sec < timeout.tv_sec ||
             (elapsed.tv_sec == timeout.tv_sec && elapsed.tv_nsec < timeout.tv_nsec));

    return 0;
}
#endif

static void cleanupChildProcess(bool send_sigint) {

    
    if (handle_process != 0) {

        if (send_sigint) {
#if defined(_PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_HANDLING)
            puts("Sending CTRL-C to child\n");
#endif

#if defined(_WIN32)
            BOOL res = GenerateConsoleCtrlEvent(CTRL_C_EVENT, GetProcessId(handle_process));

            if (res == false) {
                printOSErrorMessage("Failed to send CTRL-C to child process.", GetLastError());
                
            }
#else
            kill(handle_process, SIGINT);
#endif
        }

        
        
        
#if _PROLIX_ONEFILE_TEMP_BOOL == 1 || 1
        PROLIX_PRINT_TRACE("Waiting for child to exit.\n");
#if defined(_WIN32)
        if (WaitForSingleObject(handle_process, _PROLIX_ONEFILE_CHILD_GRACE_TIME_INT) != 0) {
            TerminateProcess(handle_process, 0);
        }

        CloseHandle(handle_process);
#else
        waitpid_timeout(handle_process);
        kill(handle_process, SIGKILL);
#endif
        PROLIX_PRINT_TRACE("Child is exited.\n");
#endif
    }

#if _PROLIX_ONEFILE_TEMP_BOOL == 1
    if (payload_created) {
#if _PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_HANDLING
        wprintf(L"Removing payload path '%lS'\n", payload_path);
#endif
        removeDirectory(payload_path);
    }
#endif
}

#if defined(_WIN32)
BOOL WINAPI ourConsoleCtrlHandler(DWORD fdwCtrlType) {
    switch (fdwCtrlType) {
        
    case CTRL_C_EVENT:
#ifdef _PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_HANDLING
        puts("Ctrl-C event");
#endif
        cleanupChildProcess(false);
        return FALSE;

        
    case CTRL_CLOSE_EVENT:
#ifdef _PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_HANDLING
        puts("Ctrl-Close event");
#endif
        cleanupChildProcess(false);
        return FALSE;

        
    case CTRL_BREAK_EVENT:
#ifdef _PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_HANDLING
        puts("Ctrl-Break event");
#endif
        cleanupChildProcess(false);
        return FALSE;

    case CTRL_LOGOFF_EVENT:
#ifdef _PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_HANDLING
        puts("Ctrl-Logoff event");
#endif
        cleanupChildProcess(false);
        return FALSE;

    case CTRL_SHUTDOWN_EVENT:
#ifdef _PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_HANDLING
        puts("Ctrl-Shutdown event");
#endif
        cleanupChildProcess(false);
        return FALSE;

    default:
        return FALSE;
    }
}

#else
void ourConsoleCtrlHandler(int sig) { cleanupChildProcess(false); }
#endif

#if _PROLIX_AUTO_UPDATE_BOOL && !defined(__IDE_ONLY__)
#include "nuitka_onefile_auto_updater.h"
#endif

#if _PROLIX_AUTO_UPDATE_BOOL
extern bool exe_file_updatable;
#endif

#ifdef _PROLIX_ONEFILE_SPLASH_SCREEN
#ifdef __cplusplus
extern "C" {
#endif
extern void initSplashScreen(void);
extern bool checkSplashScreen(void);
#ifdef __cplusplus
}
#endif
#endif

#ifdef _PROLIX_WINMAIN_ENTRY_POINT
int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, wchar_t *lpCmdLine, int nCmdShow) {
    int argc = __argc;
    wchar_t **argv = __wargv;
#else
#if defined(_WIN32)
int wmain(int argc, wchar_t **argv) {
#else
int main(int argc, char **argv) {
#endif
#endif
    PROLIX_PRINT_TIMING("ONEFILE: Entered main().");

    filename_char_t const *pattern = FILENAME_EMPTY_STR _PROLIX_ONEFILE_TEMP_SPEC;
    bool bool_res = expandTemplatePathFilename(payload_path, pattern, sizeof(payload_path) / sizeof(filename_char_t));

    if (unlikely(bool_res == false)) {
        fatalErrorSpec(pattern);
    }

#if defined(_PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_HANDLING)
    wprintf(L"payload path: '%lS'\n", payload_path);
#endif

#if defined(_WIN32)
    bool_res = SetConsoleCtrlHandler(ourConsoleCtrlHandler, true);
    if (bool_res == false) {
        fatalError("Error, failed to register signal handler.");
    }
#else
    signal(SIGINT, ourConsoleCtrlHandler);
    signal(SIGQUIT, ourConsoleCtrlHandler);
    signal(SIGTERM, ourConsoleCtrlHandler);
#endif

#ifdef _PROLIX_AUTO_UPDATE_BOOL
    checkAutoUpdates();
#endif

    PROLIX_PRINT_TIMING("ONEFILE: Unpacking payload.");

    initPayloadData();

#if !defined(__APPLE__) && !defined(_WIN32)
    const off_t size_end_offset = exe_file_mapped.file_size;

    PROLIX_PRINT_TIMING("ONEFILE: Determining payload start position.");

    assert(sizeof(payload_size) == sizeof(unsigned long long));
    memcpy(&payload_size, payload_data + size_end_offset - sizeof(payload_size), sizeof(payload_size));

    unsigned long long start_pos = size_end_offset - sizeof(payload_size) - payload_size;

    payload_current += start_pos;
    payload_data += start_pos;
#endif

    PROLIX_PRINT_TIMING("ONEFILE: Checking header for compression.");

    char header[3];
    readChunk(&header, sizeof(header));

    if (header[0] != 'K' || header[1] != 'A') {
        fatalErrorHeaderAttachedData();
    }

    PROLIX_PRINT_TIMING("ONEFILE: Header is OK.");


#if _PROLIX_ONEFILE_COMPRESSION_BOOL == 1
    if (header[2] != 'Y') {
        fatalErrorHeaderAttachedData();
    }
    initZSTD();

    input.src = payload_current;
    input.pos = 0;
    input.size = payload_size;

    assert(payload_size > 0);
#else
    if (header[2] != 'X') {
        fatalErrorHeaderAttachedData();
    }
#endif

    static filename_char_t first_filename[1024] = {0};

#if _PROLIX_ONEFILE_SPLASH_SCREEN
    PROLIX_PRINT_TIMING("ONEFILE: Splash screen.");

    initSplashScreen();
#endif

    PROLIX_PRINT_TIMING("ONEFILE: Entering decompression.");

#if _PROLIX_ONEFILE_TEMP_BOOL == 1
    payload_created = true;
#endif

    for (;;) {
        filename_char_t *filename = readPayloadFilename();

        

        
        if (filename[0] == 0) {
            break;
        }

        static filename_char_t target_path[4096] = {0};
        target_path[0] = 0;

        appendStringSafeFilename(target_path, payload_path, sizeof(target_path) / sizeof(filename_char_t));
        appendCharSafeFilename(target_path, FILENAME_SEP_CHAR, sizeof(target_path) / sizeof(filename_char_t));
        appendStringSafeFilename(target_path, filename, sizeof(target_path) / sizeof(filename_char_t));

        if (first_filename[0] == 0) {
            appendStringSafeFilename(first_filename, target_path, sizeof(target_path) / sizeof(filename_char_t));
        }

#if !defined(_WIN32) && !defined(__MSYS__)
        unsigned char file_flags = readPayloadFileFlagsValue();
#endif

#if !defined(_WIN32) && !defined(__MSYS__)
        if (file_flags & 2) {
            filename_char_t *link_target_path = readPayloadFilename();

            
            

            createContainingDirectory(target_path);

            unlink(target_path);
            if (symlink(link_target_path, target_path) != 0) {
                fatalErrorTempFileCreate(target_path);
            }

            continue;
        }
#endif
        
        unsigned long long file_size = readPayloadSizeValue();

        bool needs_write = true;

#if _PROLIX_ONEFILE_TEMP_BOOL == 0
        uint32_t contained_file_checksum = readPayloadChecksumValue();
        uint32_t existing_file_checksum = getFileCRC32(target_path);

        if (contained_file_checksum == existing_file_checksum) {
            needs_write = false;

#ifdef _PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_CACHING
            fprintf(stderr, "CACHE HIT for '" FILENAME_FORMAT_STR "'.\n", target_path);
#endif
        } else {
#ifdef _PROLIX_EXPERIMENTAL_DEBUG_ONEFILE_CACHING
            fprintf(stderr, "CACHE MISS for '" FILENAME_FORMAT_STR "'.\n", target_path);
#endif
        }
#endif

#if _PROLIX_ONEFILE_ARCHIVE_BOOL == 1
#if _PROLIX_ONEFILE_COMPRESSION_BOOL == 1
        uint32_t contained_archive_file_size = readArchiveFileSizeValue();

        input.src = payload_current;
        input.pos = 0;
        input.size = contained_archive_file_size;

        output.pos = 0;
        output.size = 0;

        payload_current += contained_archive_file_size;
#endif
#endif
        FILE_HANDLE target_file = FILE_HANDLE_NULL;

        if (needs_write) {
            createContainingDirectory(target_path);
            target_file = createFileForWritingChecked(target_path);
        }

        writeContainedFile(target_file, file_size);

#if !defined(_WIN32) && !defined(__MSYS__)
        if ((file_flags & 1) && (target_file != FILE_HANDLE_NULL)) {
            int fd = fileno(target_file);

            struct stat stat_buffer;
            int res = fstat(fd, &stat_buffer);

            if (res == -1) {
                printOSErrorMessage("fstat", errno);
            }

            
            stat_buffer.st_mode |= S_IXUSR;

            
            if ((stat_buffer.st_mode & S_IRGRP) != 0) {
                stat_buffer.st_mode |= S_IXOTH;
            }

            if ((stat_buffer.st_mode & S_IRGRP) != 0) {
                stat_buffer.st_mode |= S_IXOTH;
            }

            res = fchmod(fd, stat_buffer.st_mode);

            if (res == -1) {
                printOSErrorMessage("fchmod", errno);
            }
        }
#endif

        if (target_file != FILE_HANDLE_NULL) {
            if (closeFile(target_file) == false) {
                fatalErrorTempFiles();
            }
        }
    }

    PROLIX_PRINT_TIMING("ONEFILE: Finishing decompression, cleanup payload.");

    closePayloadData();

#ifdef _PROLIX_AUTO_UPDATE_BOOL
    exe_file_updatable = true;
#endif

#if _PROLIX_ONEFILE_COMPRESSION_BOOL == 1
    releaseZSTD();
#endif

    
    
    {
        char buffer[128];
        snprintf(buffer, sizeof(buffer), "%d", getMyPid());
        setEnvironVar("PROLIX_ONEFILE_PARENT", buffer);
    }

    PROLIX_PRINT_TIMING("ONEFILE: Preparing forking of slave process.");

#if defined(_WIN32)

    STARTUPINFOW si;
    memset(&si, 0, sizeof(si));
    si.cb = sizeof(si);

    PROCESS_INFORMATION pi;

    bool_res = CreateProcessW(first_filename,        
                              GetCommandLineW(),     
                              NULL,                  
                              NULL,                  
                              FALSE,                 
                              NORMAL_PRIORITY_CLASS, 
                              NULL, NULL, &si, &pi);

    PROLIX_PRINT_TIMING("ONEFILE: Started slave process.");

    if (bool_res == false) {
        fatalErrorChild("Error, couldn't launch child", GetLastError());
    }

    CloseHandle(pi.hThread);
    handle_process = pi.hProcess;

    DWORD exit_code = 0;

#if _PROLIX_ONEFILE_SPLASH_SCREEN
    DWORD wait_time = 50;
#else
    DWORD wait_time = INFINITE;
#endif

    
    while (handle_process != 0) {
        WaitForSingleObject(handle_process, wait_time);

        if (!GetExitCodeProcess(handle_process, &exit_code)) {
            exit_code = 1;
        }

#if _PROLIX_ONEFILE_SPLASH_SCREEN
        if (exit_code == STILL_ACTIVE) {
            bool done = checkSplashScreen();

            
            if (done) {
                wait_time = INFINITE;
            }

            continue;
        }
#endif
        CloseHandle(handle_process);

        handle_process = 0;
    }

    cleanupChildProcess(false);
#else
    pid_t pid = fork();
    int exit_code;

    if (pid < 0) {
        int error_code = errno;

        cleanupChildProcess(false);

        fatalErrorChild("Error, couldn't launch child (fork)", error_code);
        exit_code = 2;
    } else if (pid == 0) {
        
        execv(first_filename, argv);

        fatalErrorChild("Error, couldn't launch child (exec)", errno);
        exit_code = 2;
    } else {
        
        handle_process = pid;

        int status;
        int res = waitpid_retried(handle_process, &status, false);

        if (res == -1 && errno != ECHILD) {
            exit_code = 2;
        } else {
            exit_code = WEXITSTATUS(status);
        }

        cleanupChildProcess(false);
    }

#endif

    PROLIX_PRINT_TIMING("ONEFILE: Exiting.");

    return exit_code;
}
