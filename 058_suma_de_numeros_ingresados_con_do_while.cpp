#include <iostream>
using namespace std;
int main() {
    int numero, suma = 0;
    do {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;
        suma += numero;
    } while (numero != 0);
    cout << "La suma de los numeros ingresados es: " << suma << endl;
    return 0;
}
