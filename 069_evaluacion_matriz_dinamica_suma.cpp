#include <iostream>
#include <vector>
using namespace std;
int main() {
    int filas, columnas;
    long long suma = 0;
    cout << "Ingrese la cantidad de filas (1 a 100): "; cin >> filas;
    cout << "Ingrese la cantidad de columnas (1 a 100): "; cin >> columnas;
    if (filas < 1 || filas > 100 || columnas < 1 || columnas > 100) {
        cout << "Filas y columnas deben estar entre 1 y 100." << endl; return 1;
    }
    vector<vector<int>> matriz(filas, vector<int>(columnas));
    for (int i = 0; i < filas; i++) for (int j = 0; j < columnas; j++) {
        cout << "Ingrese el valor para [" << i << "][" << j << "]: ";
        cin >> matriz[i][j];
        suma += matriz[i][j];
    }
    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) cout << matriz[i][j] << "\t";
        cout << endl;
    }
    cout << "La suma de todos los elementos es: " << suma << endl;
    return 0;
}
