#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float peso, estatura, indiceMasaCorporal;
    int opcionRango;

    cout << "Calculo del Indice de masa corporal" << endl;
    cout << "Ingrese su peso (kg): ";
    cin >> peso;
    cout << "Ingrese su talla (m): ";
    cin >> estatura;

    if (peso <= 0 || estatura <= 0) {
        cout << "\nError: el peso y estatura deben ser mayores a cero\n" << endl;
    }
    else {
        indiceMasaCorporal = peso / pow(estatura, 2);

        if (indiceMasaCorporal < 18.5) {
            opcionRango = 1;
        }
        else if (indiceMasaCorporal >= 18.5 && indiceMasaCorporal < 25.0) {
            opcionRango = 2;
        }
        else if (indiceMasaCorporal >= 25.00 && indiceMasaCorporal <= 29.9) {
            opcionRango = 3;
        }
        else if (indiceMasaCorporal >= 30.00 && indiceMasaCorporal <= 34.9) {
            opcionRango = 4;
        }
        else {
            opcionRango = 5;
        }

        cout << "Su Indice de masa corporal calculado es: " << indiceMasaCorporal << " kg/m2" << endl;
        cout << "\nDiagnostico: ";

        switch (opcionRango) {
            case 1:
                cout << "Bajo peso" << endl;
                break;
            case 2:
                cout << "Peso normal" << endl;
                break;
            case 3:
                cout << "Sobrepeso" << endl;
                break;
            case 4:
                cout << "Obesidad grado 1" << endl;
                break;
            case 5:
                cout << "Obesidad grado 2" << endl;
                break;
            default:
                cout << "No se pudo clasificar el IMC" << endl;
                break;
        }
    }

    return 0;
}
