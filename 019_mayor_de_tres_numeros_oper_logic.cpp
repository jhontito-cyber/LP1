#include <iostream>
using namespace std;
int main() {
    int numeroA, numeroB, numeroC;
    cout << "Ingrese el valor de A: "; cin >> numeroA;
    cout << "Ingrese el valor de B: "; cin >> numeroB;
    cout << "Ingrese el valor de C: "; cin >> numeroC;
    if (numeroA >= numeroB && numeroA >= numeroC) cout << "El numero mayor es: " << numeroA << endl;
    else if (numeroB >= numeroA && numeroB >= numeroC) cout << "El numero mayor es: " << numeroB << endl;
    else cout << "El numero mayor es: " << numeroC << endl;
    return 0;
}
