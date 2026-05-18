// 1. Suma de Cuadrados
#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        suma += i * i;
    }

    cout << "La suma de cuadrados es: " << suma;

    return 0;
}

