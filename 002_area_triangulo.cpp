#include <iostream>
using namespace std;

int main(){
    float base, altura, area;
    cout << "Sistema de calculo de area de un triangulo" << endl;
    cout << "Ingrese la base: "; cin >> base;
    cout << "Ingrese la altura: "; cin >> altura;
    area = (base * altura) / 2;
    cout << "El area del triangulo es: " << area << endl;
    return 0;
}
