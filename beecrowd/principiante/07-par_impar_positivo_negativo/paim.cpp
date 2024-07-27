#include <stdio.h>

int main() {
  int n1,n2,n3,n4,n5; scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
  int valores[5] = {n1,n2,n3,n4,n5};
  int par=0, imp=0, pos=0, neg=0;
  for (int i=0; i<5; i++) {
    if (valores[i] > 0) {
      pos++;
    } else if (valores[i] < 0) {
      neg++;
    }

    if (valores[i]%2==0) {
      par++;
    } else {
      imp++;
    }
  }

  printf("%d valor(es) par(es)\n", par);
  printf("%d valor(es) impar(es)\n", imp);
  printf("%d valor(es) positivo(s)\n", pos);
  printf("%d valor(es) negativo(s)\n", neg);
  
  return 0;
}
