#include <iostream>

int solution(int number) {
  if (number < 0) return 0;
  int ans = 0;
  for (int i = 3; i < number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      ans += i;
    }
  }
  return ans;
}

int main() {
  std::cout << solution(20) << "\n";
  std::cout << solution(10) << "\n";
  return 0;
}