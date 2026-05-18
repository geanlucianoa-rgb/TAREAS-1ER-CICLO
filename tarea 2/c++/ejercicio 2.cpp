// 2. Tabla de Multiplicar Inversa
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 10; i >= 1; i--) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}

