import dcug.__main__


dcug.__main__.run([
    'test', 'compile', 'dclnvc.asm', 'as', 'stn'
])

dcug.__main__.run([
    'test', 'compile', 'dclfkl.asm', 'as', 'fkl'
])

dcug.__main__.run([
    'test', 'compile', 'dclrts.asm', 'as', 'rts'
])
# TODO track file compilation malfunctioning
# dcug.__main__.run([
#     'test', 'compile', 'dcltrack.asm', 'as', 'track'
# ])

