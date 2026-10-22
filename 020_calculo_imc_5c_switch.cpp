#include <iostream>
using namespace std;

int main() {
    float peso, estatura, indiceMasaCorporal;
    int opcionRango;

    cout << "=== CALCULADORA DE INDICE DE MASA CORPORAL ===" << endl;
    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;

    if (peso <= 0 || estatura <= 0) {
        cout << "ERROR: El peso y la estatura deben ser mayores a 0." << endl;
    } else {
        indiceMasaCorporal = peso / (estatura * estatura);
        cout << "Su IMC es: " << indiceMasaCorporal << endl;

        if (indiceMasaCorporal < 18.5) {
            opcionRango = 1;
        }
        else if (indiceMasaCorporal >= 18.5 && indiceMasaCorporal < 25.0) {
            opcionRango = 2;
        }
        else if (indiceMasaCorporal >= 25.0 && indiceMasaCorporal < 30.0) {
            opcionRango = 3;
        }
        else if (indiceMasaCorporal >= 30.0 && indiceMasaCorporal < 35.0) {
            opcionRango = 4;
        }
        else {
            opcionRango = 5;
        }

        switch (opcionRango) {
            case 1:
                cout << "Bajo peso" << endl;
                break;
            case 2:
                cout << "Peso Normal" << endl;
                break;
            case 3:
                cout << "Sobrepeso" << endl;
                break;
            case 4:
                cout << "Obesidad grado I" << endl;
                break;
            case 5:
                cout << "Obesidad de grado II" << endl;
                break;
            default:
                cout << "No se pudo clasificar el IMC" << endl;
                break;
        }
    }

    return 0;
}
