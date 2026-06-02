n = int(input("Ingrese un número: "))
divisor = 2

print("Factores primos:", end=" ")

while n > 1:
    while n % divisor == 0:
        print(divisor, end=" ")
        n = n // divisor
    divisor += 1