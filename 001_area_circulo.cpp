#include <iostream>
using namespace std;

int main() {
    const double PI = 3.1416;
    double radio, area;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    if (radio < 0) { cout << "El radio no puede ser negativo." << endl; return 1; }

    area = PI * radio * radio;

    cout << "El area del circulo es: " << area << endl;

    return 0;
}
