#include <iostream>

#include <library.h>

void PrintMember(const TestClass& obj) {
  std::cout << "obj.member: " << obj.member() << std::endl;
}

int main() {
  TestClass obj;

  PrintMember(obj);

  obj.IncreaseMember();
  PrintMember(obj);

  obj.MultiplyMember(3);
  PrintMember(obj);

  return 0;
}
