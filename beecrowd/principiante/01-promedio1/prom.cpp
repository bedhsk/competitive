#include <stdio.h>

int main() {
  float a, b; scanf("%f %f", &a, &b);
  float media = ((3.5*a)+(7.5*b))/(3.5+7.5);
  printf("MEDIA = %4.5f\n", media);
  return 0;
}
