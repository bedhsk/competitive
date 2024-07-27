#include <iostream>

int digital_root(int n) {
  if (n < 0) return 0;
  while (n > 9) {
    // Extract digits
    int ans = 0;
    long aux = 1;
    int unit = 0;
    while (aux <= n) {
      unit = (n % (aux * 10)) / aux;
      ans += unit;
      aux *= 10;
    }
    n = ans;
  }
  return n;
}

/*
 Un matemático aquí. Permítanme hacer mi mejor esfuerzo para explicar
 este código a cualquier persona que aún no lo entiende.
 La idea detrás de este truco es: suma de dígitos de un número 'n' es
 igual que el número 'n' en sí módulo 9. Por ejemplo, 23 = 9*2+5 = 5
 (módulo 9) = 2 + 3 (suma de dígitos módulo 9).
 Si no te lo crees - pruébalo con cualquier número que se te ocurra,
 al final dejaré una demostración semiformal.

 Por lo tanto, después de cualquier intercambio de 'n'
 con una suma de dígitos de 'n' tenemos el mismo número módulo 9.
 Y al final tenemos claramente un número de un dígito.
 Espero que hayas entendido cómo podemos calcular el número final.

 //demostración semiformal adicional //antes de seguir leyendo
 - asegúrate de entender por qué 9, 99, 999, 9999, etc son divisibles por 9.

 Vamos a demostrarlo para un número 7235. En primer lugar,
 observa que 7000 = 7 (módulo 9).
 ¿Por qué? Porque 7000 - 7 = 7 * (1000 - 1) = 7 * 999 = 0 (módulo 9).
 Entonces, 200 = 2 (módulo 9).
 De nuevo, 200 - 2 = 2 * (100-1) = 2 * 99 = 0(módulo 9)
 Con suerte, ya ves cómo funciona.
 Ahora sin mis molestos comentarios:

 7000 = 7(módulo 9) 200 = 2 (módulo 9) 30 = 3 (módulo 9) 5 = 5(módulo 9)

 sólo queda sumar estas ecuaciones.
*/
int digital_root2(int Z) { return --Z % 9 + 1; }

int digital_root3(int n) {
  int digitRoot = 0;
  while (n) {
    digitRoot += n % 10;
    n = n / 10;
  }

  return (digitRoot > 9) ? digital_root(digitRoot) : digitRoot;
}

int digital_root4(int n) {
  /*
   a number of can be represented in the form of 9k+i where 0<=i<=8
   a remainder of i means digital root i if it's a natural number
   for 0 its 0
  */
  if (not n) return n;
  n %= 9;
  return n ? n : 9;
}

int main() {
  std::cout << -1 % 9 << "\n";
  std::cout << digital_root2(1844039265) << "\n";
  std::cout << digital_root2(0) << "\n";
  return 0;
}
