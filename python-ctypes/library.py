import ctypes;

lib = ctypes.CDLL('./liblibrary-python.so');

class TestClass(object):

    def __init__(self):
        self.obj = lib.TestClass_new()

    def __del__(self):
        lib.TestClass_delete(self.obj)

    def member(self):
        return lib.TestClass_member(self.obj)

    def IncreaseMember(self):
        lib.TestClass_IncreaseMember(self.obj)

    def MultiplyMember(self, multiplier):
        lib.TestClass_MultiplyMember(self.obj, multiplier)

