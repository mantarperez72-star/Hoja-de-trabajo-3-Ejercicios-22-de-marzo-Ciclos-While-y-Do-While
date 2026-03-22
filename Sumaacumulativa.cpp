#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0; 

    cout << "Ingrese números enteros (0 para terminar): " << endl;
    cin >> numero;

    while (numero != 0) {
        suma += numero; 
        cin >> numero;  
    }

    cout << "La suma acumulada es: " << suma << endl;

    return 0;
}
