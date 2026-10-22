#include <iostream>
using namespace std;
int main() {
    int filas, columnas;
    cout << "Ingrese el numero de filas (1 a 50): "; cin >> filas;
    cout << "Ingrese el numero de columnas (1 a 50): "; cin >> columnas;
    if (filas < 1 || filas > 50 || columnas < 1 || columnas > 50) {
        cout << "Filas y columnas deben estar entre 1 y 50." << endl; return 1;
    }
    int matriz[50][50], sumaColumnas[50] = {0};
    for (int i = 0; i < filas; i++) for (int j = 0; j < columnas; j++) {
        cout << "Elemento [" << i << "][" << j << "]: "; cin >> matriz[i][j];
        sumaColumnas[j] += matriz[i][j];
    }
    cout << "Matriz y suma por filas:" << endl;
    for (int i = 0; i < filas; i++) {
        int sumaFila = 0;
        for (int j = 0; j < columnas; j++) { cout << matriz[i][j] << "\t"; sumaFila += matriz[i][j]; }
        cout << "| Suma fila: " << sumaFila << endl;
    }
    cout << "Suma de cada columna: ";
    for (int j = 0; j < columnas; j++) cout << sumaColumnas[j] << "\t";
    cout << endl;
    return 0;
}
