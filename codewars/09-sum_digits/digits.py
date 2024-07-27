def digital_root(n):
    if n == 0: return 0
    return (n-1) % 9 + 1

# recursive form
def digital_root2(n):
    return n if n < 10 else digital_root(sum(map(int,str(n))))

# Este código define una función llamada raíz_digital que 
# calcula la raíz digital de un número n. 
# La raíz digital de un número se obtiene sumando todos los dígitos 
# del número hasta que sólo queda un dígito.

# Así es como funciona el código:

# 1. Utiliza el operador módulo (%) para obtener el resto de dividir n entre 9. El resultado de esta operación será un número entre 1 y 8, o 0 si n es divisible por 9.
# 2. Se evalúa la primera parte de la expresión n%9 o. Si el resultado de n%9 es distinto de cero (lo que significa que n no es divisible por 9), entonces se devuelve este resultado.
# 3. Si el resultado de n%9 es cero (es decir, n es divisible por 9), el operador or pasa a la segunda parte de la expresión.
# 4. Se evalúa la expresión n y 9. Si n es distinto de cero, se devuelve 9. En caso contrario, si n es cero, se devuelve 0.

# 5. En resumen, esta función devuelve la raíz digital de n, que es un dígito entre 1 y 9 si n no es divisible por 9, 9 si n es divisible por 9, o 0 si n es igual a cero.
def digital_root(n):
	return n%9 or n and 9 

# |
# -> traducir
# Took me a while to figure out how this works, but thanks to a few comments below, in particular jfunction, I think I've got a grasp.

# The first step is to realize that a number like "456" can also be written as the sum "400 + 50 + 6".

# Second step. Realize that one way to find the remainder of division is to recursively take remainders of each multiple of a power of ten in the number. Basically:

# 21 % 2

# Can be found by finding:

# 20 % 2 + 1 % 2 0 + 1 1

# Simple right? Well if we try something more complicated:

# 452 % 3 400 % 3 + 50 % 3 + 2 % 3 1 + 2 + 2 5

# That can't be correct. A remainder cannot be larger than or equal to the number we are dividing by. Luckily this sum represents all of the extra "space" after each multiple of ten, so all we have to do is keep applying the modulus operation on the sum until we get a number that is less than the divisor.

# 5 % 3 2

# Which is the answer to 452 % 3.

# The third is to realize an odd pattern of the remainder of 9 (i.e. modulo or "%" 9). Imagine a number which is a power of ten (e.g. 10, 100, 1000, etc.). Each of them can be expressed as a sum like such:

# 10 = 9 + 1 100 = 99 + 1 1000 = 999 + 1

# and so on. Because the first number is divisible by 9, we know that the remainder of dividing the power of ten is 1. If we do it for 2 multiplied by a power of ten:

# 20 = 18 + 2 200 = 198 + 2 2000 = 1998 + 2

# Again, the first numer is divisible by 9, so the second number is the remainder. This continues for any multiple of a power of ten, leading to the general rule that "(x * 10 ^ n) % 9 = x" for any natural number x or n (e.g. "400 % 9 = 4", "30 % 9 = 3", etc.)

# Fourth step: combining all of the above. If we want to find the remainder after dividing by 9:

# 7342 % 9 7000 % 9 + 300 % 9 + 40 % 9 + 2 % 9 7 + 3 + 4 + 2 16

# 16 % 9 10 % 9 + 6 % 9 1 + 6 7

# In other words, the algorithm to find "% 9" perfectly mimics the algorithm to find the digital root... with one exception. If the number is divisible by 9, the modulus is 0:

# 18 % 9 10 % 9 + 8 % 9 1 + 8 9

# 9 % 9 0

# That's obviously not what we want. In order to get the correct answer, "n % 9 or n and 9" is used. The purpose of this is to return "9" in any case where the remainder is 0. Remember, in python "and" statements are evaluated first, so the order of operations is:

# n % 9 or (n and 9)

# "int and int" will return the second number if the first is anything other than 0. So for any integer, positive or negative, that is not 0, the above statment will be reduced to:

# n % 9 or 9

# "int or int" is the opposite of the above. If the first number is anything other than 0, it will return the first number, otherwise the second number is returned. So the statement means "if modulo 9 is 0, then return 9. Otherwise return modulo 9".

def digital_root(n):
    while n >= 10:
        n = sum(divmod(n, 10))
    return 

if __name__ == '__main__':
    print(digital_root(0))
    print(digital_root(71107041323227935))