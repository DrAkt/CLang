#include <iostream>
#include <cstring>

int main()
{
  char str0[20];
  char str1[10];
  char str2[10];

  std::strcpy(str1, "Hello");
  std::strcpy(str2, "Goodbye");
  std::strcpy(str0, str1);
  std::strcat(str0, str2);

  std::cout << "str1 = " << str1 << '\n';
  std::cout << "str2 = " << str2 << '\n';

  std::cout << "str0 = " << str0 << '\n';

  return 0;
}
