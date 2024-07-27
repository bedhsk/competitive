#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
// #include <fmt/core.h>

std::string rgb_to_hex(int r, int g, int b) {
  std::string ans = "";
  std::vector<int> rgb = {r, g, b};
  std::vector<std::string> hex = {"0", "1", "2", "3", "4", "5", "6", "7",
                                  "8", "9", "A", "B", "C", "D", "E", "F"};

  for (int i = 0; i < rgb.size(); i++) {
    int pow = 256;
    int n = rgb[i];

    if (n < 0) n = 0;
    if (n > 255) n = 255;
    if (n < 16) ans += "0";

    while (n >= 16) {
      if (n < 256) pow = 16;
      ans += hex[n / pow];
      n = n % pow;
    }
    ans += hex[n];
  }
  return ans;
}

// std::string rgb_to_hex2(int r, int g, int b) {
//   return fmt::format("{:02X}{:02X}{:02X}", std::clamp(r, 0, 255),
//                      std::clamp(g, 0, 255), std::clamp(b, 0, 255));
// }

std::string rgb_to_hex3(int r, int g, int b) {
  std::stringstream s;
  char c[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  if (r < 0) r = 0;
  if (g < 0) g = 0;
  if (b < 0) b = 0;
  if (r > 255) r = 255;
  if (g > 255) g = 255;
  if (b > 255) b = 255;
  s << c[(int)r / 16] << c[r % 16] << c[(int)g / 16] << c[g % 16]
    << c[(int)b / 16] << c[b % 16];
  return s.str();
}

// iomainp and algoritm for clamp

std::string rgb_to_hex4(int r, int g, int b) {
  std::stringstream stream;
  stream << std::setfill('0') << std::uppercase << std::setw(2) << std::hex
         << std::clamp(r, 0, 255);
  stream << std::setfill('0') << std::uppercase << std::setw(2) << std::hex
         << std::clamp(g, 0, 255);
  stream << std::setfill('0') << std::uppercase << std::setw(2) << std::hex
         << std::clamp(b, 0, 255);
  return stream.str();
}

/* * * * * * * * * * * * *
 *                       *
 * It's overcomplicated  *
 *  But I'm just flexin  *
 *       ヽ( •_)ᕗ        *
 *                       *
 * * * * * * * * * * * * */

// #include <iomanip>

class RGBToHex {
 public:
  static std::string rgb(int r, int g, int b) {
    using namespace std;
    for (int& c : {ref(r), ref(g), ref(b)}) {
      c = max(0, min(255, c));
    }

    ostringstream oss;
    oss << uppercase << hex << setfill('0') << setw(6)
        << (r << 16) + (g << 8) + b;

    return oss.str();
  }
};

int main() {
  std::cout << rgb_to_hex3(255, 255, 255) << "\n";
  std::cout << rgb_to_hex3(254, 253, 252) << "\n";
  std::cout << rgb_to_hex3(95, 26, 16) << "\n";
  return 0;
}