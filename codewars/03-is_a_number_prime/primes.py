from math import sqrt

def is_prime(num):
    if num <= 1: return False
    for i in range(2, int(sqrt(num))+1, 1):
        print(i)
        if num % i == 0: return False
    return True



if __name__ == '__main__':
    print(is_prime(4))
