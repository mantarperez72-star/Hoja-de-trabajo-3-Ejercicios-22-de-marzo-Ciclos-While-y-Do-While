#include <iostream>
using namespace std;

int main() {
    int numero;


    cout << "Ingrese un número  mayor que 1: ";
    cin >> numero;


    if (numero <= 1) {
        cout << "El número debe ser mayor que 1." << endl;
    } else {
        
        while (numero >= 1) {
            cout << numero << " ";
            numero--; 
        }
        cout << endl;
    }

    return 0;
}
