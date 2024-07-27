a=[]
pares=0
impares=0
positivos=0
negativos=0
for i in range(5):
    a.append(int(input()))
    if a[i]%2 == 0:
        pares+=1
    else:
        impares+=1

    if a[i] < 0:
        negativos+=1
    elif a[i] > 0:
        positivos+=1
print(f'{pares} valor(es) par(es)')
print(f'{impares} valor(es) impar(es)')
print(f'{positivos} valor(es) positivo(s)')
print(f'{negativos} valor(es) negativo(s)')
