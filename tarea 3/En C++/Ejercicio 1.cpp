#include <iostream>
using namespace std;

int main() {
    int N, i = 1, suma = 0;

    cout << "Ingrese N: ";
    cin >> N;

    while (i <= N) {
        suma += i;
        i++;
    }

    cout << "La sumatoria es: " << suma << endl;

    return 0;
}
