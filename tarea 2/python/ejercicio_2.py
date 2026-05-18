# 2. Tabla de Multiplicar Inversa

n = int(input("Ingrese un numero: "))

for i in range(10, 0, -1):
    print(n, "x", i, "=", n * i)
    input()
