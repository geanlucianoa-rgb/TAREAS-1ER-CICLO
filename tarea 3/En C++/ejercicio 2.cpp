#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero == 0) {
        contador = 1;
    } else {
        while (numero != 0) {
            numero /= 10;
            contador++;
        }
    }

    cout << "Cantidad de digitos: " << contador << endl;

    return 0;
}
