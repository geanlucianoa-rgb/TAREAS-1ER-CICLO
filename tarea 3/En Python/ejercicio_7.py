x = float(input("Ingrese un número positivo: "))

error = 0.000001

if x < 0:
    print("No existe raíz cuadrada real para números negativos.")
elif x == 0:
    print("La raíz cuadrada es: 0")
else:
    s = x

    while abs(s * s - x) > error:
        s = 0.5 * (s + x / s)

    print("La raíz cuadrada aproximada es:", s)