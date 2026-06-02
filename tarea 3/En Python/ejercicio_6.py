n = int(input("Ingrese un número entero positivo: "))

if n <= 0:
    print("Debe ingresar un número positivo.")
else:
    print("Secuencia de Collatz:")

    while n != 1:
        print(n, end=" ")

        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1

    print(1)
    print("La secuencia llegó a 1.")
    