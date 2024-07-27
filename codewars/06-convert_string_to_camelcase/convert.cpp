#include <iostream>
#include <string>

std::string to_camel_case(std::string text) {
  std::string upperCamelCase = "";
  for (int i = 0; i < text.size(); i++) {
    if (text[i - 1] == '_' | text[i - 1] == '-') continue;
    if (text[i] != '_' & text[i] != '-') {
      upperCamelCase += text[i];
    } else {
      upperCamelCase += toupper(text[i + 1]);
    }
  }
  return upperCamelCase;
}

std::string to_camel_case(std::string text) {
  for (int i = 0; i < text.size(); ++i) {
    if (text[i] == '-' || text[i] == '_') {
      text.erase(i, 1);
      text[i] = toupper(text[i]);
    }
  }
  return text;
}

std::string to_camel_case(std::string s) {
  for (int i{0}; i < s.size(); ++i)
    if (s[i] == '-' || s[i] == '_') s.erase(i, 1), s[i] = toupper(s[i]);
  return s;
}

#include <cctype>

std::string to_camel_case(std::string text) {
  for (int i = 0; i < text.size(); i++)
    if (text[i] == '-' || text[i] == '_')
      text.replace(i, 2, 1, toupper(text[i + 1]));
  return text;
}

int main() {
  std::cout << to_camel_case("hola-mundo_maicra") << "\n";

  return 0;
}