#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, s, error = 0.000001;

    cout << "Ingrese un numero positivo: ";
    cin >> x;

    if (x < 0) {
        cout << "No existe raiz cuadrada real para numeros negativos." << endl;
        return 0;
    }

    if (x == 0) {
        cout << "La raiz cuadrada es: 0" << endl;
        return 0;
    }

    s = x; // Aproximacion inicial

    while (fabs(s * s - x) > error) {
        s = 0.5 * (s + x / s);
    }

    cout << "La raiz cuadrada aproximada de " << x << " es: " << s << endl;

    return 0;
}
