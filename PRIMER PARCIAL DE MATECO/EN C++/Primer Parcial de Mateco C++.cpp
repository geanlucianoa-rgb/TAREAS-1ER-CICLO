#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Detectar Taquicardia Sostenida
bool taquicardiaSostenida(vector<int> fc, int &inicio, int &fin) {

    int consecutivas = 0;

    for(int i = 0; i < fc.size(); i++) {

        if(fc[i] > 100) {

            consecutivas++;

            if(consecutivas == 6) {

                inicio = i - 5;
                fin = i;

                return true;
            }

        } else {

            consecutivas = 0;
        }
    }

    return false;
}

// Detectar Fatiga por Esfuerzo
bool fatigaPorEsfuerzo(vector<int> fc, double &promInicio, double &promFinal) {

    promInicio = 0;
    promFinal = 0;

    for(int i = 0; i < 10; i++) {
        promInicio += fc[i];
    }

    for(int i = fc.size() - 10; i < fc.size(); i++) {
        promFinal += fc[i];
    }

    promInicio /= 10.0;
    promFinal /= 10.0;

    double aumento = ((promFinal - promInicio) / promInicio) * 100;

    return aumento > 20;
}

// Evaluar paciente
void evaluarPaciente(string nombre, vector<int> fc) {

    cout << "\nPaciente: " << nombre << endl;

    int inicio, fin;

    bool taquicardia = taquicardiaSostenida(fc, inicio, fin);

    double promInicio, promFinal;

    bool fatiga = fatigaPorEsfuerzo(fc, promInicio, promFinal);

    if(taquicardia) {

        cout << "Problema detectado: Taquicardia Sostenida" << endl;

        cout << "Se produjo entre los minutos "
             << inicio + 1
             << " y "
             << fin + 1
             << endl;
    }

    if(fatiga) {

        cout << "Problema detectado: Fatiga por Esfuerzo" << endl;

        cout << "Promedio primeros 10 minutos: "
             << promInicio
             << endl;

        cout << "Promedio ultimos 10 minutos: "
             << promFinal
             << endl;
    }

    if(!taquicardia && !fatiga) {

        cout << "Paciente sin complicaciones cardiacas." << endl;
    }
}

int main() {

    // Hulk
    vector<int> hulk;

    int datosHulk[] = {
        100,82,85,80,85,88,84,83,81,83,
        95,108,110,95,112,111,105,90,108,117,
        85,84,83,82,81,80,79,78,77,76,
        75,76,108,110,112,105,108,110,101,102,
        93,94,95,96,97,98,99,100,101,102,
        105,99,100,105,90,91,105,109,99,110
    };

    for(int i = 0; i < 60; i++) {
        hulk.push_back(datosHulk[i]);
    }

    // Tony
    vector<int> tony;

    int datosTony[] = {
        80,82,85,80,85,88,84,83,81,80,
        105,88,110,95,92,111,95,110,98,117,
        84,85,93,92,91,80,78,79,87,86,
        86,85,88,90,88,86,85,92,91,90,
        93,94,95,96,97,88,89,90,91,101,
        105,108,90,95,102,111,95,90,88,110
    };

    for(int i = 0; i < 60; i++) {
        tony.push_back(datosTony[i]);
    }

    // Steve
    vector<int> steve;

    int datosSteve[] = {
        85,98,90,95,102,101,105,90,88,110,
        95,88,90,95,92,101,102,110,103,101,
        104,105,93,92,91,80,78,79,87,86,
        86,85,88,90,88,86,85,92,91,90,
        93,94,95,96,97,88,89,90,91,101,
        81,82,83,80,85,90,84,80,81,80
    };

    for(int i = 0; i < 60; i++) {
        steve.push_back(datosSteve[i]);
    }

    // Bruce
    vector<int> bruce;

    int datosBruce[] = {
        105,108,90,105,112,111,105,90,108,117,
        95,98,90,95,92,111,95,90,88,110,
        85,84,83,82,81,80,79,78,77,76,
        75,76,78,80,82,85,88,90,91,92,
        93,94,95,96,97,98,99,100,101,102,
        75,76,78,80,82,85,88,90,91,92
    };

    for(int i = 0; i < 60; i++) {
        bruce.push_back(datosBruce[i]);
    }

    int opcion;

    do {

        cout << "\n========= MENU =========" << endl;
        cout << "1. Evaluar Hulk Banner" << endl;
        cout << "2. Evaluar Tony Iron" << endl;
        cout << "3. Evaluar Steve America" << endl;
        cout << "4. Evaluar Bruce Batman" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese opcion: ";

        cin >> opcion;

        switch(opcion) {

            case 1:
                evaluarPaciente("Hulk Banner", hulk);
                break;

            case 2:
                evaluarPaciente("Tony Iron", tony);
                break;

            case 3:
                evaluarPaciente("Steve America", steve);
                break;

            case 4:
                evaluarPaciente("Bruce Batman", bruce);
                break;

            case 5:
                cout << "Programa finalizado." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }

    } while(opcion != 5);

    return 0;
}
