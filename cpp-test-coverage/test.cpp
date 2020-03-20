#include <library.h>

int main() {
  TestClass obj;

  obj.TestedFunction(true, false);
  obj.TestedFunction(false, true);

  return 0;
}
