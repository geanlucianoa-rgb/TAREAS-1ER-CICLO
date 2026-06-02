numero = int(input("Ingrese un número decimal: "))

binario = ""

if numero == 0:
    binario = "0"
else:
    while numero > 0:
        binario = str(numero % 2) + binario
        numero //= 2

print("Número en binario:", binario)
