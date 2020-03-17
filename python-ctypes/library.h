#pragma once

class TestClass
{
 public:
  // getter
  int member() const { return member_; }

  void IncreaseMember();
  void MultiplyMember(int multiplier);

 private:
  int member_ = 0;
};
