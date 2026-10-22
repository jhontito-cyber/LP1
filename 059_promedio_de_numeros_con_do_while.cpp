#include <iostream>
using namespace std;
int main() {
    int cantidad, contador = 1;
    double suma = 0, numero;
    cout << "Ingrese la cantidad de datos: "; cin >> cantidad;
    if (cantidad <= 0) { cout << "La cantidad debe ser mayor que cero." << endl; return 1; }
    do {
        cout << "Ingrese el numero " << contador << ": "; cin >> numero;
        suma += numero;
        contador++;
    } while (contador <= cantidad);
    cout << "Suma total = " << suma << endl;
    cout << "Promedio = " << suma / cantidad << endl;
    return 0;
}
