numero = int(input("Ingrese un número entero: "))

contador = 0

if numero == 0:
    contador = 1
else:
    while numero != 0:
        numero //= 10
        contador += 1

print("Cantidad de dígitos:", contador)