#pragma once

class TestClass
{
 public:
   void TestedFunction(bool cond1, bool cond2) const;
   void UntestedFunction() const;

 private:
   void PrivateFunction(bool cond1, bool cond2) const;
};
