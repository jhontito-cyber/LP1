#include <iostream>
using namespace std;

int main() {
    double pesoMaximo = 0, pesoMinimo = 0, suma = 0, prom = 0, p = 0;
    int botellasBajoPeso = 0, validos = 0;

    cout << "CONTROL DE CALIDAD EN PLANTA INDUSTRIAL" << endl;

    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese el peso de la botella " << i << ": ";
        cin >> p;

        if (p <= 0) {
            cout << "El peso ingresado debe ser mayor a 0" << endl;
            continue;
        }

        suma = suma + p;
        validos++;

        if (validos == 1 || p > pesoMaximo) pesoMaximo = p;
        if (validos == 1 || p < pesoMinimo) pesoMinimo = p;
        if (p < 490) botellasBajoPeso += 1;
    }

    if (validos > 0) {
        prom = suma / validos;
    } else {
        prom = 0;
    }

    cout << "Suma total de pesos: " << suma << endl;
    cout << "Promedio de pesos: " << prom << endl;
    if (validos > 0) {
        cout << "Peso minimo: " << pesoMinimo << endl;
        cout << "Peso maximo: " << pesoMaximo << endl;
    } else {
        cout << "No se ingresaron pesos validos." << endl;
    }
    cout << "Total de botellas con bajo peso: " << botellasBajoPeso << endl;

    return 0;
}