#include <iostream>
using namespace std;

int main() {
    double base, altura, area, perimetro;

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    if (base < 0 || altura < 0) { cout << "La base y la altura no pueden ser negativas." << endl; return 1; }

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}
