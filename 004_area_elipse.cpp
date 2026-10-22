#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double semiejeMayor, semiejeMenor, area;

    cout << "Ingrese el semieje mayor: ";
    cin >> semiejeMayor;
    cout << "Ingrese el semieje menor: ";
    cin >> semiejeMenor;

    if (semiejeMayor < 0 || semiejeMenor < 0) { cout << "Los semiejes no pueden ser negativos." << endl; return 1; }

    area = PI * semiejeMayor * semiejeMenor;

    cout << "El area de la elipse es: " << area << endl;

    return 0;
}
