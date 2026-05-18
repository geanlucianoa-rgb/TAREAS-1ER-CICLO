#include <iostream>
using namespace std;

int main() {
    int velocidad;

    cout << "Ingrese la velocidad (km/h): ";
    cin >> velocidad;

    if (velocidad < 60) {
        cout << "OK";
    } else if (velocidad >= 60 && velocidad <= 65) {
        cout << "Advertencia";
    } else if (velocidad >= 66 && velocidad <= 75) {
        cout << "Multa";
    } else {
        cout << "Multa inmediata";
    }

    return 0;
}
