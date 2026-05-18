# 1. Suma de Cuadrados

N = int(input("Ingrese un numero: "))
suma = 0

for i in range(1, N + 1):
    suma += i ** 2

print("La suma de cuadrados es:", suma)
input("presionar para salir")