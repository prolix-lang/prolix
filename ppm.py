# Prolix Package Manager (C) Copyright @_morlus
class Utils:
    LICENSES = [
        'MIT',
        'BSD',
        'ISC',
        'GPL',
        'LGPL',
        'AGPL',
        'MPL',
        'Apache'
    ]
    indent_print = 0

    def print(obj, end='\n'):
        if obj[:7] == 'ERROR: ':
            print('\033[31m', end = '')
            end += '\033[0m'
        if obj[:7] == 'WARNING: ':
            print('\033[33m', end = '')
            end += '\033[0m'
        print('  ' * Utils.indent_print + str(obj), end=end)

    def loadprint(obj):
        Utils.print(obj, end='\r')
    
    def read_spec(file):
        import main as prolix, os
        if not os.path.isfile(file):
            Utils.print('ERROR: Invalid file')
            return
        config = open(file).read()
        prolix.SYSTEM_TABLE = prolix.UserObjectTable()
        prolix.run(config, os.path.abspath(file), prolix.SYSTEM_TABLE)
        spec = {}
        spec['config'] = getattr(prolix.Library, 'config', None)
        if spec['config'] == None:
            return "Missing class named 'config'"
        spec['info'] = getattr(prolix.Library, 'info', None)
        if spec['info'] == None:
            return "Missing class named 'info'"
        spec['build'] = getattr(prolix.Library, 'build', None)
        if spec['build'] == None:
            return "Missing class named 'build'"
        config = {}
        required_attrs = [
            'name',
            'version'
        ]
        import main
        for attr in spec['config'].attrs:
            if isinstance(spec['config'].attrs[attr], main.Table):
                spec['config'].attrs[attr] = spec['config'].attrs[attr].obj.values()
            if attr in required_attrs:
                config[attr] = spec['config'].attrs[attr]
                required_attrs.pop(required_attrs.index(attr))
        if len(required_attrs):
            return f"Missing attribute '{required_attrs[0]}' in class 'config'"
        info = {}
        required_attrs = [
            'summary',
            '=description',
            '=homepage',
            '=license',
            'dependencies',
            '=tags',
        ]
        for attr in spec['info'].attrs:
            if attr in required_attrs:
                info[attr] = spec['info'].attrs[attr]
                required_attrs.pop(required_attrs.index(attr))
            else:
                idx = 0
                for req_attr in required_attrs:
                    if req_attr[0] == '=':
                        req_attr = req_attr[1:]
                    if attr == req_attr:
                        info[attr] = spec['info'].attrs[attr]
                        required_attrs.pop(idx)
                    idx += 1
        n = True
        while n:
            n = False
            for i, v in enumerate(required_attrs):
                if v[0] == '=':
                    if required_attrs[i] in ['description', 'homepage', 'license']:
                        config[required_attrs[i]] = 'N/A'
                    else:
                        config[required_attrs[i]] = []
                    required_attrs.pop(i)
                    n = True
                    break
        if len(required_attrs):
            return f"Missing attribute '{required_attrs[0]}' in class 'info'"
        build = {}
        required_attrs = [
            'source',
            'username',
            'password',
            'api_key',
        ]
        for attr in spec['build'].attrs:
            if attr in required_attrs:
                build[attr] = spec['build'].attrs[attr]
                required_attrs.pop(required_attrs.index(attr))
        if len(required_attrs):
            return f"Missing attribute '{required_attrs[0]}' in class 'build'"
        spec['config'] = config
        spec['info'] = info
        spec['build'] = build
        return spec
    
    def check_package(package):
        Utils.chdir('__lib__')
        import os
        result = {}
        for obj in os.listdir('.'):
            if Utils.isfile(obj) and obj == f'{package}.prlx':
                result['file'] = os.path.abspath(obj)
            elif os.path.isdir(obj) and obj == package:
                result['dir'] = os.path.abspath(obj)
            elif Utils.isfile(obj) and obj == f'{package}.prlv':
                result['ver'] = os.path.abspath(obj)
        Utils.chdir('..')
        return result
    
    def chdir(path):
        import os
        if not os.path.exists(path):
            os.mkdir(path)
        os.chdir(path)
    
    def clear_cache():
        Utils.loadprint("Clearing all caches..")
        import shutil
        Utils.chdir('__prlcache__')
        Utils.chdir('..')
        shutil.rmtree('__prlcache__')
        Utils.print("Clearing all caches.. done")
    
    def convert_bytes(size):
        KB = 1024
        MB = KB * 1024
        GB = MB * 1024

        if size < KB:
            return f"{size} B"
        elif size < MB:
            return f"{size / KB:.2f} KB"
        elif size < GB:
            return f"{size / MB:.2f} MB"
        else:
            return f"{size / GB:.2f} GB"
    
    def remove(path):
        import os
        if Utils.isfile(path):
            os.remove(path)
        elif os.path.isdir(path):
            import shutil
            shutil.rmtree(path)
    
    def is_valid_version(version_string):
        import re
        pattern = re.compile(r'^\d+(\.\d+){2}$')
        return bool(pattern.match(version_string))
    
    def is_valid_url(url_string):
        from urllib.parse import urlparse
        try:
            result = urlparse(url_string)
            return all([result.scheme, result.netloc])
        except ValueError:
            return False
    
    def split_version_string(version_string):
        import re
        match = re.match(r'([^=<>]+)([=<>]+)(.*)', version_string)

        if match:
            package_name = match.group(1).strip()
            operator = match.group(2).strip()
            version = match.group(3).strip()
            return package_name, operator, version
        else:
            Utils.print(f'ERROR: Invalid dependency string format "{version_string}".')
    
    def is_zip_file(file_path):
        import zipfile
        try:
            with zipfile.ZipFile(file_path, 'r') as zip_file:
                return True
        except zipfile.BadZipFile:
            return False
    
    def isfile(file_path):
        import os
        try:
            return os.path.isfile(file_path)
        except:
            return False
    
    def is_valid_email(email):
        import re
        pattern = r'^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$'
        
        match = re.match(pattern, email)
        
        return bool(match)

    def password_strength(password):
        import re
        length_score = min(len(password) // 4, 5)

        complexity_score = 0
        if re.search(r'[a-z]', password):
            complexity_score += 1
        if re.search(r'[A-Z]', password):
            complexity_score += 1
        if re.search(r'[0-9]', password):
            complexity_score += 1
        if re.search(r'[!@#$%^&*(),.?":{}|<>]', password):
            complexity_score += 1

        total_score = length_score + complexity_score

        if total_score <= 2:
            return "Weak"
        elif total_score <= 4:
            return "Medium"
        elif total_score <= 6:
            return "Strong"
        else:
            return "Powerful"
    
    def help():
        print("Usage: ppm <command> [arguments]")
        print("")
        print("Commands:")
        print("  install <package>[@version] - Install packages.")
        print("  uninstall <package> - Uninstall packages.")
        print("  list - List installed packages.")
        print("  upload <specFile> - Upload the module to the server as a package.")
        print("  register <username> <password> <confirm-password> <email> - Register a new account.")
        print("  verify <username> <password> - Verify email.")
        print("  apikey <username> <password> - Create a new api key.")
        print("  help - Show help for commands.")

class PPMServer:
    DATABASE = None
    def connect():
        if PPMServer.DATABASE != None: return True
        Utils.loadprint(f"Connecting to the server..")
        from pymongo.mongo_client import MongoClient
        from pymongo.server_api import ServerApi
        from pymongo.database import Database
        uri = "mongodb+srv://noobv415:9jgTIBwouuSZdGgq@cluster0.knynu5m.mongodb.net/?retryWrites=true&w=majority"
        client = MongoClient(uri, server_api=ServerApi('1'))
        try:
            client.admin.command('ping')
            Utils.print("Connecting to the server.. done")
        except:
            Utils.print('Connecting to the server.. failed')
            return False
        PPMServer.DATABASE = client['main']
        return True
    
    def search(package):
        if not PPMServer.connect(): return False
        Utils.loadprint(f"Searching package for {package}..")
        from pymongo.database import Database
        PPMServer.DATABASE : Database
        PACKAGES = PPMServer.DATABASE['packages']
        package_found = PACKAGES.find_one({'package': package})
        if not package_found:
            Utils.print(f"Searching package for {package}.. failed")
        else:
            Utils.print(f"Searching package for {package}.. done")
        return package_found
    
    def install(package, version : str | None = None):
        import os
        existed_package = Utils.check_package(package)
        check_existed = False
        if existed_package.get('ver', None):
            existed_version = open(
                existed_package['ver'], 'rb'
            ).read().decode('utf-32')
            if version != None:
                if existed_version == version:
                    __lib__ = os.path.abspath('__lib__')
                    Utils.print(f'Requirement already satisfied: {package} in {__lib__} ({version})')
                    return
            else:
                check_existed = True
        package_found = PPMServer.search(package)
        if not package_found:
            Utils.print(f"ERROR: No matching package for {package}.")
            return
        if version:
            Utils.loadprint(f"Searching package version for {version}..")
        else:
            Utils.loadprint(f"Searching lastest version for {package}..")
        source = None
        for ver in package_found['sources']:
            if version == None:
                lastest = True
                for ver_ in package_found['sources']:
                    if ver_ > ver:
                        lastest = False
                        break
                if lastest:
                    version = ver
                    source = package_found['sources'][ver]
                    Utils.print(f"Searching lastest version for {package}.. done")
                    if check_existed:
                        if existed_version == version:
                            Utils.chdir('..')
                            __lib__ = os.path.abspath('__lib__')
                            Utils.print(f'Requirement already satisfied: {package} in {__lib__} ({version})')
                            return
                    break
            if ver == version:
                Utils.print(f"Searching package version for {version}.. done")
                source = package_found['sources'][ver]
                break
        if not source:
            Utils.print(f"ERROR: No matching package version for {package}@{version}.")
            return
        Utils.print(f'Collecting {package}@{version}')
        Utils.indent_print += 1
        import sys
        source_size = sys.getsizeof(source[1])
        source_size = Utils.convert_bytes(source_size)
        Utils.print(f"Installing {source[0]} ({source_size})..")
        Utils.chdir('__prlcache__')
        open(source[0], 'wb').write(source[1])
        file_name = os.path.splitext(source[0])[0]+'.prlc'
        os.rename(source[0], file_name)
        file_name = os.path.abspath(file_name)
        Utils.chdir('../__lib__')
        import zipfile
        with zipfile.ZipFile(file_name, 'r') as zip_ref:
            zip_ref.extractall('.')
        open(str(package) + '.prlv', 'wb').write(version.encode('utf-32'))
        Utils.chdir('..')
        Utils.indent_print -= 1
        Utils.print(f'Successfully installed {package}@{version}')
        PPMServer.DATABASE['packages'].update_one({'package': package}, {"$set": {'downloads': package_found['downloads'] + 1}})
        Utils.clear_cache()
    
    def uninstall(package):
        existed_package = Utils.check_package(package)
        if len(existed_package.keys()) == 0:
            Utils.print(f'ERROR: {package} is not installed.')
            return
        ver = open(existed_package["ver"], 'rb').read().decode('utf-32')
        Utils.print(f'Uninstalling {package}@{ver}..')
        Utils.indent_print += 1
        for path in existed_package:
            Utils.print(f"Uninstalled {existed_package[path]}")
            Utils.remove(existed_package[path])
        Utils.indent_print -= 1
        Utils.print(f'Successfully uninstalled {package}@{ver}')
    
    def list():
        import os
        Utils.chdir('__lib__')
        for obj in os.listdir():
            if not Utils.isfile(obj): continue
            if os.path.splitext(obj)[1] == '.prlv':
                Utils.print(f"{os.path.splitext(obj)[0]}@{open(obj,'rb').read().decode('utf-32')}")
        Utils.chdir('..')
    
    def upload(spec_path):
        spec = Utils.read_spec(spec_path)
        if isinstance(spec, str):
            Utils.print(f'ERROR: {spec}.')
            return
        
        # config
        if not spec['config']['name'].isidentifier():
            Utils.print(f"ERROR: The name '{spec['config']['name']}' for your package is illegal.")
            return
        if not Utils.is_valid_version(spec['config']['version']):
            Utils.print(f"ERROR: The version '{spec['config']['version']}' for your package is illegal.")
            return
        
        # info
        if spec['info']['summary'] == '':
            Utils.print(f"ERROR: The 'summary' cannot be empty!")
            return
        import os
        if spec['info']['description'] not in ['N/A', None] and not Utils.isfile(spec['info']['description']):
            Utils.print(f"ERROR: The 'description' must be a markdown file!")
            return
        if spec['info']['license'] != 'N/A' and spec['info']['license'] not in Utils.LICENSES:
            Utils.print(f"ERROR: Unsupported license for your package.")
            return
        for tag in spec['info']['tags']:
            if not tag.isidentifier():
                Utils.print(f"ERROR: Invalid tag for your package '{tag}'.")
                return
        if not isinstance(spec['info']['dependencies'], list):
            spec['info']['dependencies'] = [spec['info']['dependencies']]
        for dependency in spec['info']['dependencies']:
            d = Utils.split_version_string(dependency)
            if d == None: return
            if not d[0].isidentifier():
                Utils.print(f'ERROR: Invalid dependency name \'{d[0]}\'')
                return
            if d[1] not in ['==', '>=', '<=', '>', '<']:
                Utils.print(f'ERROR: Invalid dependency operator \'{d[0]}\'')
                return
            if not Utils.is_valid_version(d[2]):
                Utils.print(f'ERROR: Invalid dependency version \'{d[2]}\'')
                return
        if spec['info']['license'] != 'N/A' and not Utils.is_valid_url(spec['info']['homepage']):
            Utils.print(f"ERROR: Invalid 'homepage' url.")
            return

        # build
        og_dir = os.path.abspath(os.getcwd())
        os.chdir(os.path.dirname(spec_path))
        if not Utils.is_zip_file(spec['build']['source']):
            Utils.print(f"ERROR: The 'source' must be a zip file.")
            return
        full_zip_file = os.path.abspath(spec['build']['source'])
        os.chdir(og_dir)
        Utils.chdir('__prlcache__/..')
        Utils.remove('__prlcache__')
        Utils.chdir('__prlcache__')
        import zipfile
        with zipfile.ZipFile(full_zip_file, 'r') as zip_ref:
            zip_ref.extractall('.')
        if not Utils.isfile(spec['config']['name'] + '.prlx'):
            Utils.chdir('..')
            Utils.remove('__prlcache__')
            Utils.print(f"ERROR: Could not find file '{spec['config']['name']}.prlx' in {full_zip_file}")
            return
        Utils.remove(spec['config']['name'] + '.prlx')
        if os.path.isdir(spec['config']['name']):
            Utils.remove(spec['config']['name'])
        for obj in os.listdir():
            Utils.chdir('..')
            Utils.remove('__prlcache__')
            Utils.print(f"ERROR: Illegal directory '{spec['config']['name']}' in {full_zip_file}")
            return
        Utils.chdir('..')
        Utils.clear_cache()
        if not PPMServer.login(spec['build']['username'], spec['build']['password']):
            return
        if PPMServer.USER['api_key'] == 'N/A':
            Utils.print(f"ERROR: Your account have not been created a api key yet.")
            return
        if PPMServer.USER['api_key'] != spec['build']['api_key']:
            Utils.print(f"ERROR: Your api key is invalid.")
            return
        if PPMServer.USER['used']:
            Utils.print(f"ERROR: Your api key is outdated.")
            return
        PPMServer.USER['used'] = True
        if PPMServer.USER['verified'] != True:
            Utils.print(f"ERROR: Your account is not verified yet.")
            return
        
        # final
        package_found = PPMServer.search(spec['config']['name'])
        if package_found:
            if package_found['uploader'] != PPMServer.USER['username']:
                Utils.print(f"ERROR: You are not the uploader of {spec['config']['name']}.")
                return
            for version in package_found['sources']:
                if version == spec['config']['version']:
                    break
                version = None
            if version:
                Utils.print('', end='')
                _input = input("There is already a same version of your package. Do you want to replace it? [Y/n] ")
                if _input == 'n':
                    return
                from bson.binary import Binary
                from copy import deepcopy
                new_package_found = deepcopy(package_found)
                from datetime import datetime
                new_package_found['sources'][version] = [
                    os.path.basename(spec['build']['source']),
                    Binary(open(full_zip_file, 'rb').read()),
                    datetime.utcnow().strftime("%d/%m/%Y, %H:%M:%S"),
                ]
                PPMServer.DATABASE['packages'].replace_one(package_found, new_package_found)
                Utils.print(f"Successfully uploaded {spec['config']['name']}@{spec['config']['version']}")
                return
            else:
                from bson.binary import Binary
                from copy import deepcopy
                new_package_found = deepcopy(package_found)
                from datetime import datetime
                new_package_found['sources'][version] = [
                    os.path.basename(spec['build']['source']),
                    Binary(open(full_zip_file, 'rb').read()),
                    datetime.utcnow().strftime("%d/%m/%Y, %H:%M:%S"),
                ]
                PPMServer.DATABASE['packages'].replace_one(package_found, new_package_found)
                Utils.print(f"Successfully uploaded {spec['config']['name']}@{spec['config']['version']}")
                return
        PPMServer.DATABASE['users'].update_one({
            'username': PPMServer.USER['username']},
            {'$set': {'projects': PPMServer.USER['projects'] + [spec['config']['name']] } }
        )
        from bson.binary import Binary
        from datetime import datetime
        PPMServer.DATABASE['packages'].insert_one({
            'package': spec['config']['name'],
            'summary': spec['info']['summary'],
            'description': spec['info']['description'],
            'tags': ['test', 'cool'],
            'homepage': spec['info']['homepage'],
            'dependencies': spec['info']['dependencies'],
            'license': spec['info']['license'],
            'uploader': spec['build']['username'],
            'sources': {
                spec['config']['version']: [
                    os.path.basename(spec['build']['source']),
                    Binary(open(full_zip_file, 'rb').read()),
                    datetime.utcnow().strftime("%d/%m/%Y, %H:%M:%S"),
                ]
            },
            'follows': 0,
            'stars': 0,
            'downloads': 0,
        })
        Utils.print(f"Successfully uploaded {spec['config']['name']}@{spec['config']['version']}")
        return

    def login(username, password):
        if hasattr(PPMServer, 'USER'): return True
        if not PPMServer.connect(): return False
        user = PPMServer.DATABASE['users'].find_one({'username': username})
        if user == None:
            Utils.print(f"ERROR: Username or password is incorrected.")
            return False
        if password != user['password']:
            Utils.print(f"ERROR: Username or password is incorrected.")
            return False
        PPMServer.USER = user
        return True

    def register(username, password, confirm_password, email):
        if not PPMServer.connect(): return
        user = PPMServer.DATABASE['users'].find_one({'username': username})
        if user != None:
            Utils.print("ERROR: Username is already taken.")
            return
        if not Utils.is_valid_email(email):
            Utils.print("ERROR: Invalid email.")
            return
        user = PPMServer.DATABASE['users'].find_one({'email': email})
        if user != None:
            Utils.print("ERROR: Email is already taken.")
            return
        if len(password) < 8:
            Utils.print("ERROR: Your password must have at least 8 characters.")
            return
        if password != confirm_password:
            Utils.print("ERROR: Incorrected confirm password.")
            return
        if Utils.password_strength(password) == 'Weak':
            Utils.print('ERROR: Your password is too weak!')
            return
        if Utils.password_strength(password) == 'Medium':
            Utils.print('WARNING: Your password level is medium!')
        PPMServer.DATABASE['users'].insert_one({
            'username': username,
            'password': password,
            'email': email,
            'verified': False,
            'used': False,
            'api_key': 'N/A',
            'projects': [],
            'stared-projects': [],
            'followed-projects': [],
            'followed-users': [],
            'followers': 0,
        })
        Utils.print(f"Successfully registered new account: {username}")
    
    def verify(username, password):
        if not PPMServer.login(username, password): return
        if PPMServer.USER['verified']:
            Utils.print("ERROR: Your account is already verified.")
            return
        import smtplib, random
        from email.message import EmailMessage

        otp_code = random.randint(100000, 999999)
        Utils.loadprint('Sending OTP code to the provided email (This can takes a while)..')
        for port in [25, 465, 587]:
            try:
                server = smtplib.SMTP('smtp.gmail.com', port)
            except:
                if port == 587:
                    Utils.print('Sending OTP code to the provided email (This can takes a while).. failed')
                    return
        Utils.print('Sending OTP code to the provided email (This can takes a while).. done')
        server.starttls()
        server.login('prolixlanguage@gmail.com', 'wkqi dkuy jvxt xbok')

        msg = EmailMessage()
        msg['Subject'] = 'PPM Account Verification'
        msg['From'] = 'prolixlanguage@gmail.com'
        msg['To'] = PPMServer.USER['email']
        msg.set_content(f'Thank you for creating an account to join Prolix!\nHere is your OTP code: {otp_code}')
        server.send_message(msg)
        print('[*] Sent OTP code to the provided email')
        while True:
            otp_input = input('OTP code: ')
            if otp_input != str(otp_code):
                print('[!] Wrong OTP code, please try again..')
                continue
            break
        
        print(f'Successfully verified your account {username}')
    
    def apikey(username, password):
        if not PPMServer.login(username, password): return
        import secrets
        api_key = secrets.token_urlsafe(16)
        PPMServer.DATABASE['users'].update_one(PPMServer.USER, {
            '$set': {
                'api_key': api_key,
                'used': False,
            }
        })
        Utils.print("Successfully created a new api key! Your new api is here:")
        Utils.print(api_key)

def main():
    import sys
    sys.argv.pop(0)
    cmds = [
        'install',
        'uninstall',
        'list',
        'upload',
        'register',
        'verify',
        'apikey',
        'help'
    ]
    if len(sys.argv) == 0:
        Utils.help()
        return
    command = sys.argv.pop(0)
    if command not in cmds:
        Utils.print("ERROR: No such command '{}'.".format(command))
        return
    if command == 'help':
        Utils.help()
        return
    try:
        getattr(PPMServer, command)(*sys.argv)
    except TypeError:
        Utils.print("ERROR: Invalid command syntax.".format(command))

if __name__ == '__main__':
    try:
        main()
    except MemoryError:
        print("ERROR: Out of memory.")
    except Exception as e:
        Utils.clear_cache()
        import traceback, os
        os.chdir(os.path.dirname(__file__))
        traceback.print_exc()
