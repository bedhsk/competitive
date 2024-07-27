#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

char get_n(char w) {
  if (w == 'o' || w == 'q' || w == 'z') {
    return '0';
  } else if (w == 'i' || w == 'j') {
    return '1';
  } else if (w == 'a' || w == 'b' || w == 'c') {
    return '2';
  } else if (w == 'd' || w == 'e' || w == 'f') {
    return '3';
  } else if (w == 'g' || w == 'h') {
    return '4';
  } else if (w == 'k' || w == 'l') {
    return '5';
  } else if (w == 'm' || w == 'n') {
    return '6';
  } else if (w == 'p' || w == 'r' || w == 's') {
    return '7';
  } else if (w == 't' || w == 'u' || w == 'v') {
    return '8';
  } else if (w == 'w' || w == 'x' || w == 'y') {
    return '9';
  }
  return 'a';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  unordered_map<string, string> dict;

  // extract input
  string n;
  while (cin >> n) {
    if (n == "-1") break;
    int repeat;
    cin >> repeat;
    // save words in dictionary
    for (int i = 0; i < repeat; i++) {
      string word;
      cin >> word;
      string code;
      for (char c : word) {
        code += get_n(c);
      }
      // save words in dictionary
      dict[code] = word;
    }
    string aux;
    string pass = "real";
    for (int i = 0; i < n.size(); i++) {
      aux += n[i];
      // cout << aux << "\n";
      if (dict[aux] != "" && dict[aux] != pass) {
        n = n.substr(i);
        i = 0;
        cout << aux << " -> " << dict[aux] << "\n";
        aux = "";
      }
    }
  }

  return 0;
}