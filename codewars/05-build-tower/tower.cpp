#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
  std::vector<std::string> result;
  std::string stars = "*";
  std::string spaces = "";
  int nSpaces = nFloors - 1;

  for (int j = 0; j < nFloors; j++) spaces += " ";

  for (int i = 0; i < nFloors; i++) {
    spaces = "";
    for (int k = 0; k < nSpaces; k++) spaces += " ";
    nSpaces -= 1;
    result.push_back(spaces + stars + spaces);
    stars += "**";
  }
  return result;
}

std::vector<std::string> towerBuilder2(unsigned nFloors) {
  std::vector<std::string> vect;
  for (unsigned i = 0, k = 1; i < nFloors; i++, k += 2)
    vect.push_back(std::string(nFloors - i - 1, ' ') + std::string(k, '*') +
                   std::string(nFloors - i - 1, ' '));
  return {vect};
}

std::vector<std::string> towerBuilder3(unsigned n) {
  std::vector<std::string> tower = {};
  for (int i = 1; i <= n; i++) {
    std::string stars(2 * i - 1, '*');
    std::string spaces(n - i, ' ');
    tower.push_back(spaces + stars + spaces);
  }
  return tower;
}

int main() {
  towerBuilder(6);
  for (std::string i : towerBuilder(6)) std::cout << i << "\n";

  return 0;
}