from abc import ABC, abstractmethod
from enum import Enum, auto

from dcug.settings_parsing import *
from dcug.machine import *
import os


class Source(Enum):
    STN = auto()
    RTS = auto()
    TRACK = auto()


class Compiler(ABC):

    @abstractmethod
    def compile(self, file): pass


class JwasmCompiler(Compiler):

    def __init__(self, machine, exe_name):
        self.machine = machine
        self.exe = machine.bin_dir + '\\' + exe_name
        self.flags = None
        self.incs = None

    def set_incs(self, incs):
        self.incs = [f'-Fi="{self.machine.include_dir}\\' + inc + '"' for inc in incs]

    def __str__(self):
        return 'Compiler settings:\n\t' + '\n\t'.join([self.exe, self.flags, *self.incs])

    def compile(self, file):
        output_file_name = file.replace(".ASM", ".dat").replace(".asm", ".dat")
        err_file_name = file.replace(".ASM", ".err").replace(".asm", ".err")
        cmd = [self.exe, self.flags, *self.incs,
               f'-Fo="{output_file_name}"',
               f'-Fw="{err_file_name}"',
               file]
        self.machine.clean(err_file_name)
        return self.machine.run(cmd)
        # dirn, _ = os.path.split(os.path.abspath(file))
        # for file in os.listdir(os.path.abspath(dirn)):
        #     if '.exe' in file.lower():
        #         print(file[0:-4])


class JwasmCompilerBuilder:

    def __init__(self, machine, exe_name, targets):
        self.targets = targets
        self.compiler = JwasmCompiler(machine, exe_name)

    def target(self, target_name):
        self.compiler.set_incs(self.targets[target_name]["incs"])
        self.compiler.flags = self.targets[target_name]['flags']
        return self

    def with_flags(self, flags):
        self.compiler.flags = flags
        return self

    def build(self):
        return self.compiler
