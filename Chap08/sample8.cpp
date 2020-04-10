#include <iostream>

int main()
{
  int a = 5;
  int& rA = a;

  std::cout << "a = " << a << '\n';
  std::cout << "rA = " << rA << '\n';

  rA = 50;

  std::cout << "put 50 to rA.\n";
  std::cout << "rA = " << rA << '\n'
            << "a = " << a << '\n'
            << "&a = " << &a << '\n'
            << "&rA = " << &rA << '\n';
}
