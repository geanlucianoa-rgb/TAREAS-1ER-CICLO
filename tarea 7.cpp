#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;

    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    cout << "Ingrese un operador (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << "Resultado: " << a + b;
    } else if (op == '-') {
        cout << "Resultado: " << a - b;
    } else if (op == '*') {
        cout << "Resultado: " << a * b;
    } else if (op == '/') {
        if (b != 0) {
            cout << "Resultado: " << a / b;
        } else {
            cout << "Error: no se puede dividir entre cero";
        }
    } else {
        cout << "Operador invalido";
    }

    return 0;
}
