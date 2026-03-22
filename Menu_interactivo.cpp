#include <iostream>
using namespace std;

int main() {
    int opcion = 0;

    do {
        cout << "menu";
        cout << "1. Numeros del 1 al 5\n";
        cout << "2. Numeros pares del 1 al 10\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if(opcion == 1) {
            for(int i = 1; i <= 5; i++) {
                cout << i << " ";
            }
            cout << endl;
        }
        else if(opcion == 2) {
            for(int i = 2; i <= 10; i += 2) {
                cout << i << " ";
            }
            cout << endl;
        }
        else if(opcion == 3) {
            cout << "Adios!" << endl;
        }
        else {
            cout << "Opcion invalida\n";
        }

    } while(opcion != 3);

    return 0;
}
