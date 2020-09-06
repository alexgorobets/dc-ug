import sys
import os

# Add 'dcug' package folder in the list of Python interpreter's pathes
sys.path.append(os.path.abspath('./'))

import dcug.__main__

dcug.__main__.run([
    'compile', 'tests/test_central_post/dclnvc.asm', 'as', 'stn'
])

# dcug.__main__.run([
#     'test', 'compile', 'dclfkl.asm', 'as', 'fkl'
# ])
#
# dcug.__main__.run([
#     'test', 'compile', 'dclrts.asm', 'as', 'rts'
# ])
# TODO track file compilation malfunctioning
# dcug.__main__.run([
#     'test', 'compile', 'dcltrack.asm', 'as', 'track'
# ])

