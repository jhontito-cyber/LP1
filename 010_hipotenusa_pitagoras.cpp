#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double catetoA, catetoB, hipotenusa;

    cout << "Ingrese el cateto ca: ";
    cin >> catetoA;

    cout << "Ingrese el cateto co: ";
    cin >> catetoB;

    hipotenusa = sqrt(catetoA * catetoA + catetoB * catetoB);

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}
