#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> v = input;
  int s = v.size() - 1;
  for (int i = 0; i < s; i++) {
    if (v[i] == 0) {
      v.erase(v.begin() + i);
      v.push_back(0);
      i--;
      s--;
    }
  }

  return v;
}

auto move_zeroes2(std::vector<int> v) {
  std::stable_partition(begin(v), end(v), std::negate());
  return v;
}

auto move_zeroes3(std::vector<int> v) {
  std::stable_partition(begin(v), end(v), [](auto x) { return x; });
  return v;
}

std::vector<int> move_zeroes4(const std::vector<int>& input) {
  std::vector<int> v(input.size(), 0);
  int a = 0;
  for (auto c : input) {
    if (c != 0) {
      v[a] = c;
      ++a;
    }
  }

  return v;
}

int main() {
  move_zeroes({16,  6,  7,   13,  -10, -9,  17,  -18, 8,   -1, 14,  -17, -6,
               -11, 17, 16,  16,  -8,  -16, -17, -19, 14,  -1, 1,   -5,  20,
               -9,  14, -5,  -16, -10, 10,  -12, -20, 3,   -7, 1,   -10, 14,
               14,  1,  -19, 4,   -3,  -7,  9,   -5,  -12, -8, -10, 7,   1,
               -8,  0,  0,   16,  13,  -17, -6,  19,  -17, 12, 4,   5,   12,
               12,  14, -20, 15,  -2,  -16, 19,  -18, -10, 15, -8,  9,   -18,
               17,  2,  -1,  7,   -4,  11,  -20});
  return 0;
}