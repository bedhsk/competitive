#include <bits/stdc++.h>
using namespace std;

int main()
{
  std::ios::sync_with_stdio(false);cin.tie(NULL);

  // First method
  int a, b;
  cin >> a >> b;

  // Second method
  string linea;
  getline(cin, linea);
  istringstream iss(linea);
  vector<int> a;
  int k;

  while (iss >> k) {
    a.push_back(k)
  }

  return 0;
}
