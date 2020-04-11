#include <iostream>
#include <cstring>

int main()
{
  char str[100];

  std::cout << "Put string.\n";
  std::cin >> str;

  std::cout << "The length of the string: " << std::strlen(str) << '\n';

  return 0;
}
