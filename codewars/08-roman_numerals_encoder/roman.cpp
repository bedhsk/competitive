#include <iostream>
#include <string>
#include <vector>

std::string solution(int number) {
  std::vector<std::string> thousands;
  std::vector<std::string> hundreds;
  std::vector<std::string> tens;
  std::vector<std::string> units;
  std::string roman = "";

  thousands = {"", "M", "MM", "MMM"};
  hundreds = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
  tens = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
  units = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

  roman += thousands[number / 1000] + hundreds[(number % 1000) / 100] +
           tens[(number % 100) / 10] + units[number % 10];
  return roman;
}

int main() {
  solution(2999);
  return 0;
}