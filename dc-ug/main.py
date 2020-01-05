import os
import sys
env = os.environ['VIRTUAL_ENV']
print(env)

for arg in sys.argv:
    print(arg)

# TODO create window application on Qt
