// 4. Dibuje Rectangulo
#include <iostream>
using namespace std;

int main() {
    int ancho, alto;

    cout << "Ingrese el ancho: ";
    cin >> ancho;

    cout << "Ingrese el alto: ";
    cin >> alto;

    for (int i = 1; i <= alto; i++) {
        for (int j = 1; j <= ancho; j++) {
            if (i == 1 || i == alto || j == 1 || j == ancho)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
