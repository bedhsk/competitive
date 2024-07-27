#include <iostream>

int main() {
  int rep;
  scanf("%d", &rep);

  for (int i = 0; i < rep; i++) {
    int a[2];
    scanf("%d %d", &a[0], &a[1]);
    // Ordenar arreglo
    int aux = 0;
    if (a[0] > a[1]) {
      aux = a[0];
      a[0] = a[1];
      a[1] = aux;
    }

    int acum = 0;
    if (a[0] % 2 == 0)
      a[0]++;
    else
      a[0] += 2;
    for (int j = a[0]; j < a[1]; j += 2) {
      acum += j;
    }
    std::cout << acum << "\n";
  }

  return 0;
}
