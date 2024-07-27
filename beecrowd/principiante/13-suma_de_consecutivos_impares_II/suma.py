intervals = int(input())
for i in range(intervals):
    a = list(map(int,input().split()))
    # Ordenar lista
    a.sort(reverse=False)
    acum = 0
    if a[0] % 2 == 0: a[0] += 1
    else: a[0] += 2
    for j in range(a[0], a[1], 2):
        acum += j
    print(acum)