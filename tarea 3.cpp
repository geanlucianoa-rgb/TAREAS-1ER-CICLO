#include <iostream>
using namespace std;

int main() {
    int A, B, C, mayor;

    cout << "Ingrese tres numeros: ";
    cin >> A >> B >> C;

    if (A > B) {
        mayor = A;
    } else {
        mayor = B;
    }

    if (C > mayor) {
        mayor = C;
    }

    cout << "El numero mayor es: " << mayor;

    return 0;
}
