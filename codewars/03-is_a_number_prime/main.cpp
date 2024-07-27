#include <math.h>

#include <iostream>

bool isPrime(int num) {
  if (num < 0) return false;
  if (num == 1 || num == 0) return false;
  if (num == 2) return true;
  if (num % 2 == 0) return false;

  for (int i = 3; i < num * 0.3; i += 2) {
    // if (i > sqrt(num)) return false;
    if (num % i == 0) {
      std::cout << num << "/" << i << '\n';
      return false;
    }
  }
  return true;
}

bool isPrime2(int num) {
  for (int i = 0; i < sqrt(num); i++)
    if (num % i == 0) return false;
  return num < 1 ? false : true;
}

bool isPrime3(int num) {
  if (num == 2 || num == 3 || num == 5)
    return true;

  else if (num <= 1 || num % 2 == 0 || num % 3 == 0)
    return false;

  else {
    for (int i = 5; i <= sqrt(num); i += 6)
      if ((num % i == 0) || (num % (i + 2) == 0)) return false;

    return true;
  }
}

bool isPrime4(int num) {
  if (num < 2) return false;
  int x = sqrt(num);
  for (int i = 2; i <= x; i++)
    if (num % i == 0) return false;
  return true;
}

bool isPrime5(int num) {
  if (num <= 1) return false;
  printf("%f", round(sqrt(num)));
  for (int i = 2; i <= round(sqrt(num)); i++) {
    if (num % i == 0) return false;
  }
  return true;
}

int main() {
  std::cout << isPrime(2) << "\n";
  std::cout << isPrime(-1) << "\n";
  std::cout << isPrime(3) << "\n";
  std::cout << isPrime(5) << "\n";
  std::cout << isPrime(7) << "\n";
  std::cout << isPrime5(4) << "\n";

  return 0;
}