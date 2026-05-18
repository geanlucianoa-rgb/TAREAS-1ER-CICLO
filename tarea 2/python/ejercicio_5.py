# 5. Calculo de Potencia

base = int(input("Ingrese la base: "))
exponente = int(input("Ingrese el exponente: "))

resultado = 1

for i in range(exponente):
    resultado *= base

print("Resultado:", resultado)
input(" ")