#include <stdio.h>

int main() {
  int x,y; scanf("%d %d", &x, &y);
  int may,min;
  // Separar número mayor y número menor para el rango
  if (x > y) {
    may = x;
    min = y;
  } else {
    may = y;
    min = x;
  }

  int acum=0;
  // Sumar los números no divisibles dentro de 13 en el rango
  for (int i=min; i<=may; i++) {
    if (i%13!=0) {
      acum=acum+i;
    }
  }
  printf("%d\n",acum);

  return 0;
}
