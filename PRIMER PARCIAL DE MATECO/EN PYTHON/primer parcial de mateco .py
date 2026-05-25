# Detectar Taquicardia Sostenida
def taquicardia_sostenida(fc):

    consecutivas = 0

    for i in range(len(fc)):

        if fc[i] > 100:

            consecutivas += 1

            if consecutivas == 6:

                inicio = i - 5
                fin = i

                return True, inicio, fin

        else:

            consecutivas = 0

    return False, 0, 0


# Detectar Fatiga por Esfuerzo
def fatiga_por_esfuerzo(fc):

    prom_inicio = 0
    prom_final = 0

    # Primeros 10 minutos
    for i in range(10):
        prom_inicio += fc[i]

    # Ultimos 10 minutos
    for i in range(len(fc) - 10, len(fc)):
        prom_final += fc[i]

    prom_inicio /= 10
    prom_final /= 10

    aumento = ((prom_final - prom_inicio) / prom_inicio) * 100

    if aumento > 20:
        return True, prom_inicio, prom_final

    return False, prom_inicio, prom_final


# Evaluar paciente
def evaluar_paciente(nombre, fc):

    print("\nPaciente:", nombre)

    taquicardia, inicio, fin = taquicardia_sostenida(fc)

    fatiga, prom_inicio, prom_final = fatiga_por_esfuerzo(fc)

    if taquicardia:

        print("Problema detectado: Taquicardia Sostenida")

        print("Se produjo entre los minutos",
              inicio + 1, "y", fin + 1)

    if fatiga:

        print("Problema detectado: Fatiga por Esfuerzo")

        print("Promedio primeros 10 minutos:",
              round(prom_inicio, 2))

        print("Promedio ultimos 10 minutos:",
              round(prom_final, 2))

    if not taquicardia and not fatiga:

        print("Paciente sin complicaciones cardiacas.")


# Datos de pacientes

hulk = [
    100,82,85,80,85,88,84,83,81,83,
    95,108,110,95,112,111,105,90,108,117,
    85,84,83,82,81,80,79,78,77,76,
    75,76,108,110,112,105,108,110,101,102,
    93,94,95,96,97,98,99,100,101,102,
    105,99,100,105,90,91,105,109,99,110
]

tony = [
    80,82,85,80,85,88,84,83,81,80,
    105,88,110,95,92,111,95,110,98,117,
    84,85,93,92,91,80,78,79,87,86,
    86,85,88,90,88,86,85,92,91,90,
    93,94,95,96,97,88,89,90,91,101,
    105,108,90,95,102,111,95,90,88,110
]

steve = [
    85,98,90,95,102,101,105,90,88,110,
    95,88,90,95,92,101,102,110,103,101,
    104,105,93,92,91,80,78,79,87,86,
    86,85,88,90,88,86,85,92,91,90,
    93,94,95,96,97,88,89,90,91,101,
    81,82,83,80,85,90,84,80,81,80
]

bruce = [
    105,108,90,105,112,111,105,90,108,117,
    95,98,90,95,92,111,95,90,88,110,
    85,84,83,82,81,80,79,78,77,76,
    75,76,78,80,82,85,88,90,91,92,
    93,94,95,96,97,98,99,100,101,102,
    75,76,78,80,82,85,88,90,91,92
]


# Menu principal
while True:

    print("\n========= MENU =========")
    print("1. Evaluar Hulk Banner")
    print("2. Evaluar Tony Iron")
    print("3. Evaluar Steve America")
    print("4. Evaluar Bruce Batman")
    print("5. Salir")

    opcion = input("Ingrese opcion: ")

    if opcion == "1":
        evaluar_paciente("Hulk Banner", hulk)

    elif opcion == "2":
        evaluar_paciente("Tony Iron", tony)

    elif opcion == "3":
        evaluar_paciente("Steve America", steve)

    elif opcion == "4":
        evaluar_paciente("Bruce Batman", bruce)

    elif opcion == "5":
        print("Programa finalizado.")
        break

    else:
        print("Opcion invalida.")