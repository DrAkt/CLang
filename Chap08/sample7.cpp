#include <iostream>

void swap(int* pX, int* pY);

int main()
{
  int num1 = 5;
  int num2 = 10;

  std::cout << "num1 = " << num1 << '\n';
  std::cout << "num2 = " << num2 << '\n';
  std::cout << "I'll swap the two.\n";

  swap(&num1, &num2);

  std::cout << "num1 = " << num1 << '\n';
  std::cout << "num2 = " << num2 << '\n';

  return 0;
}

void swap(int* pX, int* pY)
{
  int tmp;

  tmp = *pX;
  *pX = *pY;
  *pY = tmp;
}
