#include <stdio.h>

int main() {
  int N[20], temp[10], n;
  // Llenar el arreglo con 20 números
  for (int i=0; i<20; i++) {
    scanf("%d",&n);
    N[i]=n;
  }

  for (int i=0, f=19; i<10; i++,f--) {
    temp[i] = N[i]; // Guardar primeros 10 datos en una varable temporal
    N[i] = N[f]; // Reemplazamos los primeros 10 datos con los del final
    N[f] = temp[i]; // Reemplza los 10 últimos datos con los primeros 10 guardados en temp
  }

  // Imprime los 20 datos del arreglo
  for (int i=0; i<20; i++) {
    printf("N[%d] = %d\n",i,N[i]);
  }

  return 0;
}
