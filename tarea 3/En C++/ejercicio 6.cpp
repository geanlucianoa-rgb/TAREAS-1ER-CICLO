#include <iostream>
using namespace std;

int main() {
    long long n;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Debe ingresar un numero positivo." << endl;
        return 0;
    }

    cout << "Secuencia de Collatz:" << endl;

    while (n != 1) {
        cout << n << " ";

        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }

    cout << 1 << endl;
    cout << "La secuencia llego a 1." << endl;

    return 0;
}
