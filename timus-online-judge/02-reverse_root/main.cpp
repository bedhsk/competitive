#include <cmath>
#include <cstdio>
#include <stack>

int main() {
  std::stack<long long> numbers;
  long long n;
  while (scanf("%lld", &n) != EOF) {
    numbers.push(n);
  }

  while (!numbers.empty()) {
    printf("%.4lf\n", sqrt(numbers.top()));
    numbers.pop();
  }

  return 0;
}