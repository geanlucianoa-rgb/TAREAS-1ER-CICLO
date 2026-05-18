#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero >= 0) {
        if (numero == 0) {
            cout << "El numero es cero";
        } else {
            cout << "El numero es positivo";
        }
    } else {
        cout << "El numero es negativo";
    }

    return 0;
}
