#include <iostream>

namespace x
{
  class A
  {
  public:
    void print();
  };
}

void x::A::print()
{
  std::cout << "Hello, World!" << std::endl;
}

int main()
{
  x::A a;

  a.print();
  return 0;
}