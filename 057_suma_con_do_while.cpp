#include <iostream>
using namespace std;
int main() {
    int numero = 1, suma = 0;
    do {
        cout << "Numero: " << numero << endl;
        suma += numero;
        numero++;
    } while (numero <= 10);
    cout << "La suma total del 1 al 10 es: " << suma << endl;
    return 0;
}
