#include <iostream>
using namespace std;

int main()
{
    float peso, altura, indiceMasaCorporal;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    if (altura > 0) {
        indiceMasaCorporal = peso / (altura * altura);

        cout << "Su Indice de Masa Corporal (IMC) es: " << indiceMasaCorporal << endl;

        if (indiceMasaCorporal < 18.5) {
            cout << "Clasificacion: Bajo peso" << endl;
        }
        else if (indiceMasaCorporal >= 18.5 && indiceMasaCorporal < 25.0) {
            cout << "Clasificacion: Peso normal" << endl;
        }
        else if (indiceMasaCorporal >= 25.0 && indiceMasaCorporal < 30.0) {
            cout << "Clasificacion: Sobrepeso" << endl;
        }
        else if (indiceMasaCorporal >= 30.0 && indiceMasaCorporal < 35.0) {
            cout << "Clasificacion: Obesidad Grado I" << endl;
        }
        else if (indiceMasaCorporal >= 35 && indiceMasaCorporal <= 39.9) {
            cout << "Clasificacion: Obesidad Grado II" << endl;
        }
        else {
            cout << "Clasificacion: Obesidad Grado III" << endl;
        }
    }
    else {
        cout << "Error: La altura debe ser mayor a cero." << endl;
    }

    return 0;
}

/*int main()
{
    float peso, altura, imc;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros : ";
    cin >> altura;

    if (altura > 0) {
        imc = peso / (altura * altura);

        cout << "Su Indice de Masa Corporal (IMC) es: " << imc << endl;

        if (imc < ) {
            cout << "Clasificacion: Bajo peso" << endl;
        }
        else if (imc < ) {
            cout << "Clasificacion: Peso normal" << endl;
        }
        else if (imc < ) {
            cout << "Clasificacion: Sobrepeso" << endl;
        }
        else {
            cout << "Clasificacion: Obesidad" << endl;
        }
    }
    else {
        cout << "Error: La altura debe ser mayor a cero." << endl;
    }

    return 0;
}*/
