num = int(input())

for i in range(num):
    a = list(map(float,input().split()))
    prom = ((2*a[0])+(3*a[1])+(5*a[2]))/(2+3+5)
    print(f'{prom:.1f}')
