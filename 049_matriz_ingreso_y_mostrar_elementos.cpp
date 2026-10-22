#include <iostream>

using namespace std;

int main() {
    int filas, columnas;
    
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    
    if (filas < 1 || filas > 50 || columnas < 1 || columnas > 50) {
        cout << "Filas y columnas deben estar entre 1 y 50." << endl;
        return 1;
    }
    int matriz[50][50];
    
    cout << "Ingrese los elementos" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "A [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j <  columnas; j++) {
        
            cout << matriz[i][j] << "\t";
        }
        cout << endl; 
    }

    return 0;
}
