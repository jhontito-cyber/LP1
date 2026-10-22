#include <iostream>
using namespace std;
int main() {
    int cantidadNotas;
    double suma = 0, nota;
    cout << "Ingrese la cantidad de notas: "; cin >> cantidadNotas;
    if (cantidadNotas <= 0) { cout << "La cantidad debe ser mayor que cero." << endl; return 1; }
    for (int i = 1; i <= cantidadNotas; i++) {
        cout << "Ingrese la nota " << i << ": "; cin >> nota;
        suma += nota;
    }
    cout << "La suma de notas es: " << suma << endl;
    cout << "El promedio de notas es: " << suma / cantidadNotas << endl;
    return 0;
}
