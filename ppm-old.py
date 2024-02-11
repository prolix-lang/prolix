import email.message
import subprocess
import datetime
import getpass
import smtplib
import random
import sys
import re
import os

class ProcessEnded(Exception):
    pass

DB = None
connected = False
def connect():
    global DB, connected
    if connected: return True
    print('[*] Connecting to server..')
    from pymongo.mongo_client import MongoClient
    from pymongo.server_api import ServerApi
    uri = "mongodb+srv://noobv415:9jgTIBwouuSZdGgq@cluster0.knynu5m.mongodb.net/?retryWrites=true&w=majority"
    client = MongoClient(uri, server_api=ServerApi('1'))
    try:
        client.admin.command('ping')
        print("[$] Connected to server")
    except:
        print('[!] Connecting to server failed..')
        return False
    DB = client['main']
    connected = True
    return True

def disableoutput():
    sys.stdout = open(os.devnull, 'w')

def enableoutput():
    sys.stdout = sys.__stdout__

def parseargs():
    args = {}
    system_args = sys.argv[1:]
    
    commands = {
        'install': [1, '<package-name>'],
        'uninstall': [1, '<package-name>'],
        'list': [0, ''],
        'search': [1, '<package-name>'],
        'upload': [1, '<setup-file-path>'],
        'register': [0, ''],
        'help': [0, '']
    }

    if len(system_args) == 0:
        print('Usage: ppm <command> [options]')
        print('')
        print('Commands:')
        print('  install | Install packages')
        print('  uninstall | Uninstall packages')
        print('  list | List installed packages')
        print('  search | Search PPM for packages')
        print('  upload | Upload packages')
        print('  register | Sign up for a new account')
        print('  help | Show help for commands')
        return

    if system_args[0] in commands:
        args['command'] = system_args[0]
    else:
        print(f'[!] Invalid command: \'{system_args[0]}\'')
        return None

    if commands[args['command']][0] != len(system_args[1:]):
        print(f'[!] Command \'{args["command"]}\' require {commands[args["command"]]} argument(s)')
        print(f'Usage: ppm {args["command"]} {commands[args["command"]][1]}')
        return None
    
    args['options'] = system_args[1:]

    return args

def extractstring(input_string):
    pattern = re.compile(r'([^@]+)(?:@(\d+\.\d+\.\d+))?$')
    match = pattern.match(input_string)

    if match:
        name = match.group(1)
        version = match.group(2) if match.group(2) else 'default_version'
        return [name, version]
    else:
        print(f'[!] Illegal package name: \'{input_string}\'')
        return None

def extractver(input_string):
    pattern = re.compile(r'\d+\.\d+\.\d+$')
    match = pattern.match(input_string)

    if match:
        return True
    else:
        print(f'[!] Illegal version: \'{input_string}\'')
        return False

def extractemail(input_string):
    pattern = re.compile(r'[^@]+@[^@]+\.[^@]+')
    match = pattern.match(input_string)

    if match: return True
    else:
        print(f"[!] Invalid email: \'{input_string}\'")

def getsetup(setup_string):
    if not os.path.isfile('prolix.exe'):
        print('[!] Cannot find \'prolix.exe\'')
        return None
    
    res = ''
    for char in setup_string:
        res += char
        __cache__ = open('__cache__.prlx', 'w')
        __cache__.write(res)
        __cache__.close()
    
    output = subprocess.check_output('prolix --setup __cache__.prlx').decode('utf-8')
    output = output[:-1].split('\n')
    if output[-1] == 'failed':
        print(output[-2])
        return None
    
    for cmd in output:
        try:
            exec(cmd)
        except:
            pass
    
    required_attrs = [
        'package',
        'version',
        'summary',
        'description',
        'dependencies',
        'license'
    ]

    res = {}

    for attr in required_attrs:
        if attr not in locals().keys():
            print(f'[!] Could not find attribute \'{attr}\'')
            return None
        res[attr] = locals()[attr]
    
    return res

def loadsource(source, in_main=True):
    if in_main:
        os.chdir('__lib__')
    for obj in source:
        if isinstance(source[obj], list):
            loadsource(source[obj], False)
        elif isinstance(source[obj], str):
            res = ''
            for char in source[obj]:
                res += char
                open(os.path.join(os.getcwd(), obj), 'w').write(res)
    os.chdir('..')

def readsource(s_attrs, source, main=True):
    for obj in os.listdir():
        if os.path.isfile(obj):
            if obj in ['setup.prlx', f'{s_attrs["package"]}.prlx']:
                if obj == 'setup.prlx': continue
                source[obj] = open(obj).read()
                print(f'[$] Uploaded file \'{os.path.abspath(obj)}\'')
            elif main:
                print(f'[!] Invalid file \'{os.path.abspath(obj)}\' cannot be uploaded')
            else:
                source[obj] = open(obj).read()
                print(f'[$] Uploaded file \'{os.path.abspath(obj)}\'')
        elif os.path.isdir(obj):
            if main:
                if obj != s_attrs['package']:
                    print(f'[!] Invalid directory {obj} cannot be uploaded')
                else:
                    source[obj] = {}
                    os.chdir(obj)
                    readsource(s_attrs, source[obj], False)
                    os.chdir('..')
                    print(f'[$] Uploaded directory \'{os.path.abspath(obj)}\'')
            else:
                source[obj] = {}
                os.chdir(obj)
                readsource(s_attrs, source[obj], False)
                os.chdir('..')
                print(f'[$] Uploaded directory \'{os.path.abspath(obj)}\'')

def main():
    args = parseargs()

    if not args: return

    if args['command'] == 'install':
        res = extractstring(args['options'][0])
        if not res: return

        if res[1] == 'default_version':
            filter = {'package': res[0], 'lastest': True}
        else:
            filter = {'package': res[0]}
        
        if not connect(): return
        print(f'[*] Searching for package \'{res[0]}\'..')
        result = None
        res_attrs = None
        for package in DB['packages'].find(filter):
            if res[1] == 'default_version':
                result = package
            
            disableoutput()
            attrs = getsetup(package['setup'])
            enableoutput()

            if not attrs:
                continue
            if attrs['version'] == res[1]:
                result = package
                res_attrs = attrs
        if not result:
            print(f'[!] Could not find package \'{res[0]}\'')
            return
        print(f'[$] Package \'{res[0]}\' found')
        if not os.path.isdir('__imports__'):
            print('[!] Could not find directory \'__imports__\'')
            return
        os.chdir('__imports__')
        found_ver = None
        found_file = None
        for obj_name in os.listdir():
            disableoutput()
            obj_src = open(obj_name).read()
            os.chdir('..')
            attrs = getsetup(obj_src)
            os.chdir('__imports__')
            enableoutput()
            if not attrs:
                continue
            if attrs['package'] == res[0]:
                found_ver = attrs['version']
                found_file = os.path.abspath(obj_name)
                break
        if found_ver:
            if found_ver == res[1]:
                print(f'[!] Detected same version of \'{res[0]}\' already exists')
                return
            else:
                print(f'[?] Detected another version of \'{res[0]}\' already exists')
                print(f'[*] Uninstalling package \'{res[0]}@{found_ver}\'..')
                os.remove(found_file)
                for obj_name in os.listdir():
                    if os.path.isdir(obj_name):
                        if obj_name == res[0]:
                            os.rmdir(obj_name)
                            break
                os.chdir('..')
                if not os.path.isdir('__lib__'):
                    print('[!] Could not find directory \'__lib__\'')
                    return
                os.chdir('__lib__')
                for obj_name in os.listdir():
                    if os.path.isdir(obj_name):
                        if obj_name == res[0]:
                            os.rmdir(obj_name)
                    elif os.path.isfile(obj_name):
                        if os.path.splitext(obj_name)[0] == res[0]:
                            os.remove(obj_name)
                os.chdir('..')
                print(f'[$] Uninstalled \'{res[0]}@{found_ver}\' successfully')
                os.chdir('__imports__')
        print("[*] Loading dependencies..")
        os.chdir('..')
        attrs = getsetup(result['setup'])
        os.chdir('__imports__')
        for dep in attrs['dependencies']:
            s = dep.split('@')
            if len(s) == 2:
                name = s[0]
                ver = s[1]
                if name == 'prolix':
                    os.chdir('..')
                    o = subprocess.check_output("prolix --version").decode()[7:-2]
                    os.chdir('__imports__')
                    if o == ver:
                        print(f'[$] Requirement is satisfied: {dep}')
                    else:
                        print(f'[!] Requirement is not satisfied: {dep}')
                else:
                    ress = None
                    for package in DB['packages'].find({"package": name}):
                        disableoutput()
                        os.chdir('..')
                        attrs = getsetup(package['setup'])
                        os.chdir('__imports__')
                        enableoutput()

                        if not attrs:
                            continue
                        if attrs['version'] == ver:
                            ress = package
                    if not ress:
                        print(f'[!] Requirement is not satisfied: {dep}')
                        continue
                    else:
                        found_ver_ = None
                        found_file_ = None
                        for obj_name in os.listdir():
                            disableoutput()
                            obj_src = open(obj_name).read()
                            os.chdir('..')
                            attrs = getsetup(obj_src)
                            os.chdir('__imports__')
                            enableoutput()
                            if not attrs:
                                continue
                            if attrs['package'] == name:
                                found_ver_ = attrs['version']
                                found_file_ = os.path.abspath(obj_name)
                                break
                        def install():
                            og = sys.argv
                            sys.argv = []
                            sys.argv.append(og[0])
                            sys.argv.append('install')
                            sys.argv.append(f'{name}@{ver}')
                            os.chdir('..')
                            main()
                            os.chdir('__imports__')
                            sys.argv = og
                        if found_ver_:
                            if found_ver_ == ver:
                                print(f'[$] Requirement is satisfied: {dep}')
                            else:
                                print(f'[?] Detected another version of \'{name}\' already exists. Do you want to uninstall it?')
                                while True:
                                    i = input('[y/n]: ')
                                    if i not in ['y', 'n']:
                                        print('[!] Invalid input')
                                        continue
                                    break
                                if i == 'y':
                                    print(f'[*] Uninstalling package \'{name}@{found_ver_}\'..')
                                    os.remove(found_file_)
                                    for obj_name in os.listdir():
                                        if os.path.isdir(obj_name):
                                            if obj_name == name:
                                                os.rmdir(obj_name)
                                                break
                                    os.chdir('..')
                                    if not os.path.isdir('__lib__'):
                                        print('[!] Could not find directory \'__lib__\'')
                                        return
                                    os.chdir('__lib__')
                                    for obj_name in os.listdir():
                                        if os.path.isdir(obj_name):
                                            if obj_name == name:
                                                os.rmdir(obj_name)
                                        elif os.path.isfile(obj_name):
                                            if os.path.splitext(obj_name)[0] == name:
                                                os.remove(obj_name)
                                    os.chdir('..')
                                    print(f'[$] Uninstalled \'{name}@{found_ver_}\' successfully')
                                    os.chdir('__imports__')
                                    install()
                        else:
                            install()
                continue
        print(f'[*] Installing package \'{res[0]}{f"@{res[1]}" if res[1] != "default_version" else ""}\'..')
        resl = ''
        for char in result['setup']:
            resl += char
            open(f'{res[0]}.prlx', 'w').write(resl)
        os.chdir('..')
        if not os.path.isdir('__lib__'):
            print('[!] Could not find directory \'__lib__\'')
            return
        loadsource(result['source'])
        print(f'[$] Installed package \'{res[0]}{f"@{res[1]}" if res[1] != "default_version" else ""}\' successfully')
    elif args['command'] == 'uninstall':
        if not os.path.isdir('__imports__'):
            print('[!] Could not find directory \'__imports__\'')
            return
        os.chdir('__imports__')
        found = False
        for obj_name in os.listdir():
            if os.path.splitext(obj_name)[0] == args['options'][0]:
                found = True
                break
        if not found:
            print(f'[!] Package \'{args["options"][0]}\' is not installed yet')
            return
        obj_src = open(obj_name).read()
        obj_n = os.path.abspath(obj_name)
        os.chdir('..')
        attrs = getsetup(obj_src)
        if not attrs:
            print(f'[!] Could not read setup file in package \'{args["options"][0]}\'')
            return
        print(f'[*] Uninstalling package \'{attrs["package"]}@{attrs["version"]}\'..')
        if not os.path.isdir('__lib__'):
            print('[!] Could not find directory \'__lib__\'')
            return
        os.chdir('__lib__')
        for obj_name in os.listdir():
            if os.path.isdir(obj_name):
                if obj_name == attrs["package"]:
                    os.rmdir(obj_name)
            elif os.path.isfile(obj_name):
                if os.path.splitext(obj_name)[0] == attrs["package"]:
                    os.remove(obj_name)
        os.remove(obj_n)
        os.chdir('..')
        print(f'[*] Uninstalled package \'{attrs["package"]}@{attrs["version"]}\' successfully')
    elif args['command'] == 'list':
        if not os.path.isdir('__imports__'):
            print('[!] Could not find directory \'__imports__\'')
            return
        os.chdir('__imports__')
        for obj_name in os.listdir():
            obj_src = open(obj_name).read()
            obj_n = os.path.abspath(obj_name)
            os.chdir('..')
            attrs = getsetup(obj_src)
            if not attrs:
                print(f'[!] Could not read setup file in package \'{os.path.splitext(obj_name)[0]}\'')
                return
            print(f'{attrs["package"]}@{attrs["version"]}')
            os.remove('__cache__.prlx')
            os.chdir('__imports__')
    elif args['command'] == 'search':
        res = extractstring(args['options'][0])
        if not res: return

        if res[1] == 'default_version':
            filter = {'package': res[0], 'lastest': True}
        else:
            filter = {'package': res[0]}
        
        if not connect(): return
        print(f'[*] Searching for package \'{res[0]}\'..')
        result = None
        for package in DB['packages'].find(filter):
            if res[1] == 'default_version':
                result = package
            
            disableoutput()
            attrs = getsetup(package['setup'])
            enableoutput()

            if not attrs: 
                print(f'[!] Could not read setup file in package \'{package["package"]}\'')
                return
            if attrs['version'] == res[1]:
                result = package
        if not result:
            print(f'[!] Could not find package \'{res[0]}\'')
            return
        print(f'[$] Package \'{res[0]}\' found')
        print(f'Publisher: {result["publisher"]}')
        print(f'Published in: {result["published"]}')
        print(f'Last updated in: {result["updated"]}')
        print(f'Is lastest?: {str(result["lastest"]).lower()}')
        print(f'Summary: {attrs["summary"]}')
        print(f'Dependencies: {", ".join(attrs["dependencies"])}')
        print(f'Description: {attrs["description"]}')
        os.remove('__cache__.prlx')
    elif args['command'] == 'upload':
        setupfile = args['options'][0]
        if not os.path.isabs(setupfile):
            print(f'[!] Please put the full path of the setup file')
            return
        if not os.path.isfile(setupfile):
            print(f'[!] Could not find file \'{setupfile}\'')
            return
        print(f'[*] Reading setup file \'{setupfile}\'..')
        s_attrs = getsetup(open(setupfile).read())
        if not s_attrs:
            print(f'[!] Could not read setup file \'{setupfile}\'')
            return
        if not s_attrs["package"].isidentifier():
            print(f'[!] Invalid package name: \'{s_attrs["package"]}\'')
            return
        if s_attrs["package"] == 'prolix':
            print(f'[!] Invalid package name: \'{s_attrs["package"]}\'')
            return
        if not extractver(s_attrs["version"]): return
        if not connect(): return
        og_dir = os.getcwd()
        os.chdir(os.path.dirname(setupfile))
        source = {}
        readsource(s_attrs, source)
        print('[?] All processes are complete, please log in to complete the final step')
        while True:
            username = input('Username: ').lower()
            password = getpass.getpass('Password: ')
            found = False
            for user in DB['users'].find({'username': username, 'password': password}):
                found = True
                break
            if not found:
                print('[!] Invalid username or password, please try again..')
                continue
            break
        print(f'[$] Logged in as \'{user["username"]}\'')
        if not user['verified']:
            print('[!] Your account is not verified')
            raise ProcessEnded
        versions = []
        published = datetime.datetime.now().strftime('%D')
        updated = 'none'
        for package in DB['packages'].find({'package': s_attrs['package']}):
            disableoutput()
            b = os.getcwd()
            os.chdir(og_dir)
            attrs = getsetup(package['setup'])
            os.chdir(b)
            enableoutput()

            if not attrs:
                continue

            if package['publisher'] != user['username'].lower():
                print(f'[!] There is already a package named \'{attrs["package"]}\' and published by \'{attrs["author"]}\'')
                raise ProcessEnded
            if attrs['version'] == s_attrs['version']:
                print(f'[?] Detected your package currently has the same version on the server, but do you want to replace it?')
                while True:
                    i = input('[y/n]: ')
                    if i not in ['y', 'n']:
                        print('[!] Invalid input')
                        continue
                    if i == 'n':
                        raise ProcessEnded
                    break
                published = package['published']
                updated = datetime.datetime.now().strftime('%D')
                DB['packages'].delete_one(package)
            
            DB['packages'].update_one(package, {'$set': {'lastest': False}})
            versions.append(attrs['version'])
        versions.sort()
        lastest = False
        if len(versions):
            if versions[-1] < s_attrs['version']:
                lastest = True
            else:
                for package in DB['packages'].find({'package': s_attrs['package']}):
                    disableoutput()
                    attrs = getsetup(package['setup'])
                    enableoutput()

                    if not attrs:
                        continue

                    if attrs['version'] != versions[-1]: continue
                    
                    DB['packages'].update_one(package, {'$set': {'lastest': True}})
                    break
        else:
            lastest = True
        if not user['verified']:
            print('[!] Your accound is not verified yet')
        if user['trusted']:
            DB['packages'].insert_one({
                'package': s_attrs['package'],
                'publisher': user['username'],
                'setup': open(setupfile).read(),
                'lastest': lastest,
                'published': published,
                'updated': updated,
                'source': source,
            })
            print('[$] Uploaded successfully')
        else:
            DB['pending_packages'].insert_one({
                'package': s_attrs['package'],
                'publisher': user['username'],
                'setup': open(setupfile).read(),
                'lastest': lastest,
                'published': published,
                'updated': updated,
                'source': source,
            })
            print('[$] The upload was successful but your package is being moderated and there will soon be an announcement about your project on our discord via the link sent from the "discord" command.')
        os.chdir(og_dir)
    elif args['command'] == 'register':
        connect()
        _email = input('Email: ')
        username = input('Username: ')
        password = getpass.getpass('Password: ')
        confirm_password = getpass.getpass('Confirm password: ')
        if not extractemail(_email): return
        for _ in DB['users'].find({'email': _email}):
            print('[!] The email has already been taken')
            return
        if not username.isidentifier():
            print(f'[!] Invalid username: \'{username}\'')
            return
        for _ in DB['users'].find({'username': username}):
            print('[!] The username has already been taken')
            return
        if len(password) < 8:
            print('[!] Password requires minimum 8 charecters')
            return
        if password != confirm_password:
            print('[!] Password did not match')
            return
        otp_code = random.randint(100000, 999999)
        print('[*] Sending OTP code to the provided email.. (This can takes a while)')
        for port in [25, 465, 587]:
            try:
                server = smtplib.SMTP('smtp.gmail.com', port)
            except:
                if port == 587:
                    print('[!] Cannot send OTP code')
                    return
        server.starttls()
        server.login('prolixlanguage@gmail.com', 'wkqi dkuy jvxt xbok')

        msg = email.message.EmailMessage()
        msg['Subject'] = 'PPM Account Verification'
        msg['From'] = 'prolixlanguage@gmail.com'
        msg['To'] = _email
        msg.set_content(f'''Thank you for creating an account to join Prolix!
Here is your OTP code: {otp_code}''')
        server.send_message(msg)
        print('[*] Sent OTP code to the provided email')
        while True:
            otp_input = input('OTP code: ')
            if otp_input != str(otp_code):
                print('[!] Wrong OTP code, please try again..')
                continue
            break
        DB['users'].insert_one({
            'username': username,
            'password': password,
            'trusted': False,
            'projects': []
        })
        if username != username.lower():
            print(f'[?] Your username has been changed to \'{username.lower()}\' for some reasons..')
        username = username.lower()

        print('[$] Signing up successfully')
    elif args['command'] == 'help':
        print('Usage: ppm <command> [options]')
        print('')
        print('Commands:')
        print('  install | Install packages')
        print('  uninstall | Uninstall packages')
        print('  list | List installed packages')
        print('  search | Search server for packages')
        print('  upload | Upload packages')
        print('  register | Sign up for a new account')
        print('  help | Show help for commands')
        return
                    
    if os.path.isfile('__cache__.prlx'):
        print('[$] Removed \'__cache__.prlx\'')
        os.remove('__cache__.prlx')

if __name__ == '__main__':
    try:
        main()
    except KeyboardInterrupt:
        print('\n[!] The process may cause fatal errors!')
    except ProcessEnded:
        print('\n[!] Processing was cancelled')