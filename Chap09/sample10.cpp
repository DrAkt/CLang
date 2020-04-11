#include <iostream>

int main()
{
  char str[] = "Hello";

  std::cout << "Hello\n";

  for (int i=0; str[i]!='\0'; i++) {
    std::cout << str[i] << '*';
  }

  std::cout << '\n';

  return 0;
}
