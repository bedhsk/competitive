#include <iostream>
#include <stack>
#include <string>

bool valid_braces(const std::string &braces) {
  std::stack<char> p;
  int size = braces.size();
  for (int i = 0; i < size; i++) {
    // Comprueba si es un caracter de apertura
    if (braces[i] == '(' || braces[i] == '[' || braces[i] == '{') {
      p.push(braces[i]);
    }
    // Comprueba si es un caracter de cierre
    if (braces[i] == ')' || braces[i] == ']' || braces[i] == '}') {
      if (p.empty())
        return false;  // Si la pila está vacía no hay elementos que sacar
      // () -> 40 y 41 | [] -> 91 y 93 | {} -> 123 y 125
      if (p.top() + 2 == braces[i] || p.top() + 1 == braces[i]) {
        p.pop();
      } else {
        return false;
      }
    }
  }
  if (!p.empty()) return false;  // La pila no debería tener elementos
  return true;
}

// Solución con regex
#include <regex>

bool valid_bracesi2(std::string s) {
  std::regex r("\\(\\)|\\[\\]|\\{\\}");
  while (std::regex_search(s, r)) s = std::regex_replace(s, r, "");
  return s.length() == 0;
}

// recorrer el string
bool valid_braces3(std::string braces) {
  std::vector<char> stack;
  for (char tok : braces) {
    switch (tok) {
      case '(':
        stack.push_back(')');
        break;
      case '[':
        stack.push_back(']');
        break;
      case '{':
        stack.push_back('}');
        break;
      case '}':
      case ']':
      case ')':
        if (stack.empty() || stack.back() != tok) return false;
        stack.pop_back();
    }
  }
  return stack.empty();
}

// Solución con un mapa
#include <map>
#include <stack>
using namespace std;

bool valid_braces4(std::string braces) {
  map<char, char> dict = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
  vector<char> v = {'(', '{', '['};
  stack<char> s;
  for (auto c : braces) {
    if (find(v.begin(), v.end(), c) != v.end())
      s.push(dict[c]);
    else if (s.empty() || c != s.top())
      return false;
    else if (c == s.top())
      s.pop();
  }
  return s.empty();
}

int main() {
  std::cout << valid_braces("(((") << "\n";
  std::cout << valid_braces("()") << "\n";
  std::cout << valid_braces("))))") << "\n";
  std::cout << valid_braces("[({})](]") << "\n";
  return 0;
}