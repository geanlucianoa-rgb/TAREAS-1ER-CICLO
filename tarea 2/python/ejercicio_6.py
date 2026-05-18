# 6. Filtro de Pares e Impares

suma_pares = 0
cantidad_impares = 0

for i in range(10):
    num = int(input("Ingrese un numero: "))

    if num % 2 == 0:
        suma_pares += num
    else:
        cantidad_impares += 1

print("Suma de pares:", suma_pares)
print("Cantidad de impares:", cantidad_impares)
input(" ")