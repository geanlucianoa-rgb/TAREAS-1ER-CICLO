# 7. Buscador de Divisores y Primalidad

N = int(input("Ingrese un numero: "))
contador = 0

print("Divisores:")

for i in range(1, N + 1):
    if N % i == 0:
        print(i)
        contador += 1

if contador == 2:
    print("El numero es primo")
else:
    print("El numero no es primo")
    input("presione par salir")
    