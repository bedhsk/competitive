#include <iostream>
#include <string>

std::string reverse(const std::string &word, const bool isEnd) {
  std::string reverted = "";
  std::string space = " ";  // Imprime espacio siempre y cuando no sea eof

  if (isEnd) {
    space = "";
  }

  if (word.size() < 5) {
    return word + space;
  }

  for (int i = word.size() - 1; i >= 0; i--) {
    reverted += word[i];
  }

  return reverted + space;
}

std::string spinWords(const std::string &str) {
  std::string word = "";
  std::string res = "";

  // Recorrer string
  for (int i = 0; i <= str.size(); i++) {
    // Si encuentra un espacio en blanco o caracter
    // de final termina una palabre
    if (str[i] == ' ' || str[i] == 0) {
      // Determinar si es un espacio o un caracter de final
      if (str[i] == 0) {
        res += reverse(word, true);
      } else {
        res += reverse(word, false);
      }
      word = "";
      i++;  // Saltar el espacio en blanco para solo guardar la palabra
    }

    word += str[i];
  }

  return res;
}

// include <string>
#include <algorithm>
#include <sstream>
std::string otherSolution(const std::string &str) {
  std::stringstream ss(str);
  std::string result;
  std::string buff;
  while (ss >> buff) {
    if (buff.size() >= 5) {
      std::reverse(buff.begin(), buff.end());
    }
    result += buff + ' ';
  }
  result.pop_back();
  return result;
}

// #include <algorithm>
std::string otherSolution2(const std::string &str) {
  std::string s = str;
  int cStart = 0, len = s.length();
  for (int i = 0; i < len; i++) {
    if (s[i] == ' ') {
      if (i - cStart >= 5) std::reverse(s.begin() + cStart, s.begin() + i);
      cStart = i + 1;
    }
  }
  if (len - cStart >= 5) std::reverse(s.begin() + cStart, s.end());
  return s;
}

// No incluyó otras librerías, un caop
using namespace std;  //
string otherSolution3(const string &s) {
  stringstream ss(s);
  string a, res;
  while (getline(ss, a, ' ')) {
    if (a.size() >= 5) {
      reverse(a.begin(), a.end());
      res += a + " ";
    } else
      res += a + " ";
  }
  return res.substr(0, res.size() - 1);
}

int main() {
  std::cout << spinWords("Hola mi nombre es nairB") << "\n";
  std::cout << spinWords("Hey wollef sroirraw") << "\n";
  std::cout << spinWords("to") << "\n";

  std::cout << otherSolution3("Hola mi nombre es nairB") << "\n";
  std::cout << otherSolution3("Hey wollef sroirraw") << "\n";
  std::cout << otherSolution3("to") << "\n";
  return 0;
}