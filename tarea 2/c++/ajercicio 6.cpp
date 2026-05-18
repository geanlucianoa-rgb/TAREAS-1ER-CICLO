// 6. Filtro de Pares e Impares
#include <iostream>
using namespace std;

int main() {
    int num, sumaPares = 0, cantidadImpares = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num % 2 == 0)
            sumaPares += num;
        else
            cantidadImpares++;
    }

    cout << "Suma de pares: " << sumaPares << endl;
    cout << "Cantidad de impares: " << cantidadImpares;

    return 0;
}
