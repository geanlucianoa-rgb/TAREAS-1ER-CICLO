#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Ingrese dos numeros enteros: ";
    cin >> A >> B;

    if (A > B) {
        cout << "A es mayor que B";
    } else {
        if (B > A) {
            cout << "B es mayor que A";
        } else {
            cout << "Ambos numeros son iguales";
        }
    }

    return 0;
}
