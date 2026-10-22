#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    cout << "Ingrese el valor de C: ";
    cin >> c;

    if (a >= b) {
        if (a >= c) {
            cout << "El numero mayor es: " << a << endl;
        } else {
            cout << "El numero mayor es: " << c << endl;
        }
    }
    else {
        if (c >= b) {
            cout << "El numero mayor es: " << c << endl;
        } else {
            cout << "El numero mayor es: " << b << endl;
        }
    }

    return 0;
}
