#include <stdio.h>
#include <string>

bool solution(std::string const &str, std::string const &ending) {
  bool res = true;

  int lenStr = str.size();
  int lenEnd = ending.size();

  for (int i=0; i<lenEnd; i++) {
    printf("%c\n", str[5]);
    if (str[lenStr-lenEnd+i] != ending[i]) {
      res = false;
    }
  }

  return res;
}

bool solution2(const std::string& str, const std::string& ending) {
  return str.size() >= ending.size() && str.compare(str.size() - ending.size(), std::string::npos, ending) == 0;
}

bool solution3(std::string const &str, std::string const &ending) {
    const int slen = str.length();
    const int eLen = ending.length();
    
    if (slen < eLen) {
        return false;
    }
    
    for (int i = 1; i <= eLen; i++) {
        if (str[slen - i] != ending[eLen - i]) {
            return false;
        }
    }
    return true;
}

bool solution4(std::string const &str, std::string const &ending) {
    return (std::string(str.end() - ending.size(), str.end()) == ending);
}

bool solution5(std::string const &str, std::string const &ending) {
    return std::equal(ending.rbegin(), ending.rend(), str.rbegin());
}

bool solution6(std::string const &str, std::string const &ending)
{
    std::string::size_type n;
    n = str.find(ending, str.size()-ending.size());

    if (n == std::string::npos)
        return false;
    return true;
}

bool solution7( const std::string& s, const std::string& e ) {
  return equal( e.crbegin(), e.crend(), s.crbegin() );
}

int main() {
  bool sol = solution("banana", "ana");
  bool sol2 = solution("banana", "ano");
  bool sol3 = solution("", "t");
  printf("%d %d %d\n", sol, sol2, sol3);

  return 0;
}
