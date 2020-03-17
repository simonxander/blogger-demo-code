#include <library.h>

extern "C" {

TestClass* TestClass_new()
{
  return new TestClass();
}

void TestClass_delete(TestClass* ptr)
{
  delete ptr;
}

int TestClass_member(TestClass* ptr)
{
  return ptr->member();
}

void TestClass_IncreaseMember(TestClass* ptr)
{
  ptr->IncreaseMember();
}

void TestClass_MultiplyMember(TestClass* ptr, int multiplier)
{
  ptr->MultiplyMember(multiplier);
}

}  // extern "C"
