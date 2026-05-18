#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "Ingrese una nota (0-20): ";
    cin >> nota;

    if (nota >= 18 && nota <= 20) {
        cout << "A";
    } else if (nota >= 14 && nota <= 17) {
        cout << "B";
    } else if (nota >= 12 && nota <= 13) {
        cout << "C";
    } else {
        cout << "D";
    }

    return 0;
}
