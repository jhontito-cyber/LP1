#include <iostream>
using namespace std;
int main() {
    int contador = 1, sumaPares = 0, sumaImpares = 0, sumaTotal = 0;
    while (contador <= 10) {
        cout << "Numero: " << contador << endl;
        if (contador % 2 == 0) sumaPares += contador;
        else sumaImpares += contador;
        sumaTotal += contador;
        contador++;
    }
    cout << "Suma de numeros pares: " << sumaPares << endl;
    cout << "Suma de numeros impares: " << sumaImpares << endl;
    cout << "Suma total: " << sumaTotal << endl;
    return 0;
}
