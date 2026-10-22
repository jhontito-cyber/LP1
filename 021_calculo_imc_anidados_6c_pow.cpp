#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float peso, estatura, indiceMasaCorporal;

    cout << "Ingrese su peso (kg): ";
    cin >> peso;
    cout << "Ingrese su estatura (m): ";
    cin >> estatura;

    if (peso <= 0 || estatura <= 0) {
        cout << "\nLos datos no pueden tomar valores negativos o cero\n";
    }
    else {
        indiceMasaCorporal = peso / pow(estatura, 2);

        if (indiceMasaCorporal < 18.5) {
            cout << "\nEl sujeto pertenece a la categoria de bajo peso\n";
        }
        else {
            if (indiceMasaCorporal >= 18.5 && indiceMasaCorporal < 25.0) {
                cout << "\nEl sujeto pertenece a la categoria de peso normal\n";
            }
            else {
                if (indiceMasaCorporal >= 25.0 && indiceMasaCorporal < 30.0) {
                    cout << "\nEl sujeto pertenece a la categoria de sobrepeso\n";
                }
                else {
                    if (indiceMasaCorporal >= 30.0 && indiceMasaCorporal < 35.0) {
                        cout << "\nEl sujeto pertenece a la categoria de Obesidad grado I\n";
                    }
                    else {
                        if (indiceMasaCorporal >= 35.0 && indiceMasaCorporal < 40.0) {
                            cout << "\nEl sujeto pertenece a la categoria de Obesidad grado II\n";
                        }
                        else {
                            cout << "\nEl sujeto pertenece a la categoria de Obesidad grado III\n";
                        }
                    }
                }
            }
        }
    }

    return 0;
}
