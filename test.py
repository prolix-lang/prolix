a = 99999999
stri = f'''
def {"h"*a}(): print('hi')
{"h"*a}()
'''
import sys
print(sys.getsizeof(stri))
exec(stri)