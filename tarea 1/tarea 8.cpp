#include <iostream>
using namespace std;

int main() {
    float km;
    char tipo;

    cout << "Ingrese la distancia (km): ";
    cin >> km;

    cout << "Ingrese el tipo de terreno (C, T, M): ";
    cin >> tipo;

    if (tipo == 'C' || tipo == 'c') {
        cout << "Tiempo: " << km / 80 << " horas";
    } else if (tipo == 'T' || tipo == 't') {
        cout << "Tiempo: " << km / 50 << " horas";
    } else if (tipo == 'M' || tipo == 'm') {
        cout << "Tiempo: " << km / 30 << " horas";
    } else {
        cout << "Tipo de terreno invalido";
    }

    return 0;
}
