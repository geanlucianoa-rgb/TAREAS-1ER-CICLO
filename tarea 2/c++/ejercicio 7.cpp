// 7. Buscador de Divisores y Primalidad
#include <iostream>
using namespace std;

int main() {
    int N, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    cout << "Divisores: ";

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            cout << i << " ";
            contador++;
        }
    }

    cout << endl;

    if (contador == 2)
        cout << "El numero es primo";
    else
        cout << "El numero no es primo";

    return 0;
}

