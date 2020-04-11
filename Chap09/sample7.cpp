#include <iostream>

double avg(int t[]);

int main()
{
  int test[5];

  std::cout << "Put the results of 5 people.\n";
  for (int i=0; i<5; i++) {
    std::cin >> test[i];
  }

  double ans = avg(test);
  std::cout << "The average score of the five: " << ans << '\n';

  return 0;
}

double avg(int t[])
{
  double sum = 0;
  for (int i=0; i<5; i++) {
    sum += t[i];
  }

  return sum/5;
}
