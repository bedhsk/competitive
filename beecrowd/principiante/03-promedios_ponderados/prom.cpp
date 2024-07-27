#include <stdio.h>

int main() {
  int num; scanf("%d", &num);
  float a, b, c = 0;

  for (int i=0; i<num; i++) {
    scanf("%f %f %f", &a, &b, &c);
    float media = ((a*2)+(b*3)+(c*5))/(2+3+5);
    printf("%1.1f\n", media);
  }

  return 0;
}
