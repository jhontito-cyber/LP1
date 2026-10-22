#include <iostream>
using namespace std;

int main() {
    float primerNumero, segundoNumero, suma, resta, multiplicacion, division;

    cout << "Sistema de operaciones basicas" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> primerNumero;
    cout << "Ingresa el segundo numero: ";
    cin >> segundoNumero;

    suma = primerNumero + segundoNumero;
    resta = primerNumero - segundoNumero;
    multiplicacion = primerNumero * segundoNumero;

    cout << "\nEl resultado de la suma es: " << suma << endl;
    cout << "El resultado de la resta es: " << resta << endl;
    cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;

    if (segundoNumero != 0) {
        division = primerNumero / segundoNumero;
        cout << "El resultado de la division es: " << division << endl;
    } else {
        cout << "El resultado de la division es: No se puede dividir entre cero" << endl;
    }

    return 0;
}
