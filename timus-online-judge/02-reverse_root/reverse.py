import sys
from math import sqrt

numbers = sys.stdin.read().split()
for n in numbers[::-1]:
    print("{:.4f}".format(sqrt(float(n))))