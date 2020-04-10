#include <iostream>

int main()
{
  int a;
  int* pA;

  a = 5;
  pA = &a;

  std::cout << "a = " << a << '\n';
  std::cout << "pA = " << pA << '\n';
  std::cout << "*pA = " << *pA << '\n';
}
