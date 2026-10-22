#include <iostream>
using namespace std;

int main(){
    float fahrenheit, celsius;
    cout << "Sistema de conversion de grados Celsius a grados Fahrenheit" << endl;
    cout << "Ingrese grados Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 1.8) + 32;
    cout << "La conversion a grados Fahrenheit es: " << fahrenheit;
    return 0;
}
