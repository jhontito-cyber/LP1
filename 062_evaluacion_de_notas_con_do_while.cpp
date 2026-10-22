#include <iostream>
using namespace std;
int main() {
    int cantidadNotas, contador = 1;
    double nota;
    cout << "Ingrese la cantidad de notas: "; cin >> cantidadNotas;
    if (cantidadNotas <= 0) { cout << "La cantidad debe ser mayor que cero." << endl; return 1; }
    do {
        cout << "Ingrese la nota del examen parcial (0 a 20), numero " << contador << ": ";
        cin >> nota;
        if (nota < 0 || nota > 20) cout << "La nota ingresada no es valida." << endl;
        else if (nota >= 10.5) cout << "Estado: Aprobado" << endl;
        else cout << "Estado: Desaprobado" << endl;
        contador++;
    } while (contador <= cantidadNotas);
    return 0;
}
