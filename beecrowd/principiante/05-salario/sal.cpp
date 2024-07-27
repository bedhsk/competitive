#include <stdio.h>

int main() {
  int num, hour; scanf("%d %d", &num, &hour);
  float sal; scanf("%f", &sal);
  printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, (hour*sal));
}
