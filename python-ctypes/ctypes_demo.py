from library import TestClass

def PrintMember(obj):
    print('obj.member: ' + str(obj.member()))

def main():
    obj = TestClass()

    PrintMember(obj)

    obj.IncreaseMember()
    PrintMember(obj)

    obj.MultiplyMember(3)
    PrintMember(obj)

if __name__== "__main__":
    main()
