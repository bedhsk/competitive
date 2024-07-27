#include <stdio.h>

#include <iostream>

void increment(int *v) {
  std::cout << "Address in v -> " << v << "\n";
  std::cout << "Value in Address -> " << *v << "\n";
  std::cout << "Address of v -> " << &v << "\n";
  (*v)++;
}

int main() {
  int a = 11;
  int *b = &a;
  std::cout << "Original Address -> " << &a << "\n";
  std::cout << "Saved on b pointer -> " << *b << "\n";
  scanf("%d", &a);
  increment(&a);
  printf("%d\n", a);
  return 0;
}