#include <iostream>
#include <vector>
using namespace std;
int main() {
    int cantidadNotas;
    double suma = 0, nota;
    cout << "Ingrese la cantidad de notas: "; cin >> cantidadNotas;
    if (cantidadNotas <= 0) { cout << "La cantidad debe ser mayor que cero." << endl; return 1; }
    vector<double> notas(cantidadNotas);
    for (int i = 0; i < cantidadNotas; i++) {
        cout << "Ingrese la nota " << i + 1 << ": "; cin >> nota;
        notas[i] = nota;
        suma += nota;
    }
    cout << "Lista de todas las notas:" << endl;
    for (int i = 0; i < cantidadNotas; i++) cout << "Nota en indice [" << i << "]: " << notas[i] << endl;
    cout << "El promedio de notas es: " << suma / cantidadNotas << endl;
    return 0;
}
