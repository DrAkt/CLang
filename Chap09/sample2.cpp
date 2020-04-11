#include <iostream>

int main()
{
  const int num = 5;
  int test[num];

  std::cout << "Put the score of " << num << " people.\n";
  for (int i=0; i<num; i++) {
    std::cin >> test[i];
  }

  for (int j=0; j<num; j++) {
    std::cout << "test[" << j << "] = " << test[j] << '\n';
  }

  return 0;
}
