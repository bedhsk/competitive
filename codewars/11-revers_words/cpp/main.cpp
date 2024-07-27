#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string reverse_words(std::string str) {
  std::string ans = "";
  std::stringstream ss(str);
  std::string token;
  char delimiter = ' ';

  if (str == "") return str;
  while (getline(ss, token, delimiter)) {
    std::reverse(token.begin(), token.end());
    // reverse large form
    // std::string aux = "";
    // for (int i = token.size() - 1; i >= 0; i--) {
    //   aux += token[i];
    // }
    ans += token + ' ';
  }
  if (str[str.size() - 1] != ' ') ans.pop_back();
  return ans;
}

int main() {
  //   std::cout << reverse_words("Mi Nombre es Brian") << "|" << "\n";
  std::cout << reverse_words("ab   ba   cd  ") << "|" << "\n";
  std::cout << reverse_words("") << "|" << "\n";
  //   std::cout << reverse_words("Test with a trailing space ") << "|" << "\n";
  return 0;
}