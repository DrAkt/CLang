#include <iostream>

int main()
{
  const int num = 5;
  int test[num];

  std::cout << "Put the score of " << num << " people.\n";
  for (int i=0; i<num; i++) {
    std::cin >> test[i];
  }
  
  for (int s=0; s<num-1; s++) {
    for (int t=s+1; t<num; t++) {
      if (test[t] > test[s]) {
        int tmp = test[t];
        test[t] = test[s];
        test[s] = tmp;
      }
    }
  }

  for (int j=0; j<num; j++) {
    std::cout << "test[" << j << "] = " << test[j] << '\n';
  }

  return 0;
}
