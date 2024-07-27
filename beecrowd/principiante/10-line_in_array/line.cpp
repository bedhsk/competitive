#include <stdio.h>

int main() {
  float M[12][12], m, res;
  int line; scanf("%d", &line);
  char operation; scanf("%s", &operation);

  // Guardar los datos por fila M[filas][columnas]
  for (int i=0; i<12; i++) {
    for (int j=0; j<12; j++) {
      scanf("%f", &m);
      M[i][j] = m;
    }
  }

  // Sumar una línea
  for (int i=0; i<12; i++) {
    res=res+M[line][i];
  }

  // Si se solicita la media dividir la respuesta
  if (operation == 'M') {
    res=res/12;
  }

  printf("%.1f\n",res);

  return 0;
}
