#include <stdio.h>
#include <cmath>

int main() {
  int dia1; scanf("Dia %d", &dia1);
  int h1,m1,s1; scanf("%d : %d : %d\n", &h1, &m1, &s1);

  int dia2; scanf("Dia %d", &dia2);
  int h2,m2,s2; scanf("%d : %d : %d", &h2, &m2, &s2);

  int aux;

  dia1 = dia2-dia1;
  if (dia1+m1+s1 != 0 && dia2+m2+s2 != 0) {
    dia1--;
  }

  s1 = (60-s1) + s2;
  aux = trunc(s1/60);
  if (aux > 0) {
    s1 = s1-(aux*60);
  }

  m1 = (59-m1) + m2;
  m1 = m1+aux;
  aux = trunc(m1/60);
  if (aux > 0) {
    m1 = m1-(aux*60);
  }

  h1 = (23-h1) + h2;
  h1 += aux;
  aux = trunc(h1/24);
  if (aux > 0) {
    h1 = h1-(aux*24);
  }

  dia1 += aux;

  printf("%d dia(s)\n",dia1);
  printf("%d hora(s)\n",h1);
  printf("%d minuto(s)\n",m1);
  printf("%d segundo(s)\n",s1);

  return 0;
}
