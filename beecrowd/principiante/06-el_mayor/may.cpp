#include <stdio.h>
#include <cmath>

int main() {
  int a,b,c; scanf("%d %d %d", &a, &b, &c);
  int mayab = (a+b+abs(a-b))/2;
  int maymc = (mayab+c+abs(mayab-c))/2;
  printf("%d eh o maior\n",maymc);
}
