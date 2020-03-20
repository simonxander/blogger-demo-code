#include <library.h>

void TestClass::TestedFunction(bool cond1, bool cond2) const
{
  PrivateFunction(cond1, cond2);
}

void TestClass::UntestedFunction() const
{
  PrivateFunction(false, false);
}

void TestClass::PrivateFunction(bool cond1, bool cond2) const
{
  int local;

  if (cond1) {
    local = 1;
  } else {
    local = 2;
  }

  if (not cond2) {
    local = 3;
  } else {
    local = 4;
  }
}
