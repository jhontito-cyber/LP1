#include <iostream>
using namespace std;

int main() {
    float numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es neutro." << endl;
    }

    return 0;
}
