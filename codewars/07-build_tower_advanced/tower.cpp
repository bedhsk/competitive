#include <string>
#include <vector>

std::vector<std::string> towerBuilder(int nFloors, int blockWidth,
                                      int blockHeight) {
  int floorWidth = ((nFloors - 1) * 2 + 1) * blockWidth;

  std::vector<std::string> tower;
  for (int f = 0; f < nFloors; f++) {
    int nStars = (f * 2 + 1) * blockWidth;
    int nSpaces = (floorWidth - nStars) / 2;

    for (int i = 0; i < blockHeight; i++) {
      tower.push_back(std::string(nSpaces, ' ') + std::string(nStars, '*') +
                      std::string(nSpaces, ' '));
    }
  }

  return tower;
}