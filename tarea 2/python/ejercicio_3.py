# 3. Factorial de un numero

N = int(input("Ingrese un numero: "))
factorial = 1

for i in range(1, N + 1):
    factorial *= i

print("El factorial es:", factorial)
input("presione para salir")
