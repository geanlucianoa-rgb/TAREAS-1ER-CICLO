#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;
    string binario = "";

    cout << "Ingrese un numero decimal: ";
    cin >> numero;

    if (numero == 0) {
        binario = "0";
    } else {
        while (numero > 0) {
            binario = char((numero % 2) + '0') + binario;
            numero /= 2;
        }
    }

    cout << "Numero en binario: " << binario << endl;

    return 0;
}

