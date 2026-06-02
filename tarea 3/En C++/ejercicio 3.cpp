#include <iostream>
using namespace std;

int main() {
    int A, B, resultado = 0, i = 0;

    cout << "Ingrese A: ";
    cin >> A;

    cout << "Ingrese B: ";
    cin >> B;

    while (i < B) {
        resultado += A;
        i++;
    }

    cout << "Resultado de la multiplicacion: " << resultado << endl;

    return 0;
}

