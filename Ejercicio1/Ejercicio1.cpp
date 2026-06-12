#include <iostream>
using namespace std;

// Función que determina si un número es par
bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPar(numero)) {
        cout << "El numero es par." << endl;
    } else {
        cout << "El numero es impar." << endl;
    }

    return 0;
}