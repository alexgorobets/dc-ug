import os
import PyInstaller.__main__

PyInstaller.__main__.run([
    '--name=%s' % 'dcug',
    '--onefile',
    os.path.join('dcug', '__main__.py'),
])

PyInstaller.__main__.run([
    '--name=%s' % 'dcugw',
    '--onefile',
    os.path.join('dcug', 'dcugw.pyw'),
])
