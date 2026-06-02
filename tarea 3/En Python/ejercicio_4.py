a = int(input("Ingrese el primer número: "))
b = int(input("Ingrese el segundo número: "))

while b != 0:
    residuo = a % b
    a = b
    b = residuo

print("El MCD es:", a)