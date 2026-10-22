#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;
    if (a == 0) {
        if (b != 0) cout << "Es una ecuacion lineal. Solucion: x = " << -c / b << endl;
        else if (c == 0) cout << "Infinitas soluciones." << endl;
        else cout << "No tiene solucion." << endl;
        return 0;
    }
    double discriminante = b*b - 4*a*c;
    if (discriminante > 0) {
        cout << "Raices reales y diferentes:" << endl;
        cout << "x1 = " << (-b + sqrt(discriminante))/(2*a) << endl;
        cout << "x2 = " << (-b - sqrt(discriminante))/(2*a) << endl;
    } else if (discriminante == 0) {
        cout << "Raiz real doble: x = " << -b/(2*a) << endl;
    } else {
        cout << "Raices complejas:" << endl;
        cout << "x1 = " << -b/(2*a) << " + " << sqrt(-discriminante)/(2*abs(a)) << "i" << endl;
        cout << "x2 = " << -b/(2*a) << " - " << sqrt(-discriminante)/(2*abs(a)) << "i" << endl;
    }
    return 0;
}
