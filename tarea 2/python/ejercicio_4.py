# 4. Dibujar Rectangulo

ancho = int(input("Ingrese el ancho: "))
alto = int(input("Ingrese el alto: "))

for i in range(alto):
    for j in range(ancho):
        if i == 0 or i == alto - 1 or j == 0 or j == ancho - 1:
            print("*", end="")
        else:
            print(" ", end="")
    print()
    input(" ")