import re
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

while True:
    print(extractstring(input('> ')))