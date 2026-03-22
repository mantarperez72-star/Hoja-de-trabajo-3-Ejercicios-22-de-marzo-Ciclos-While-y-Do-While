#include <iostream>
using namespace std;

int main() {
    int contrasena;

    cout << "Ingrese la contraseña: ";
    cin >> contrasena;

    while (contrasena != 1234) {
        cout << "Error: contraseña incorrecta. Intente de nuevo: ";
        cin >> contrasena;
    }

    cout << "Acceso concedido. ¡Bienvenido Arturo Pérez!" << endl;

    return 0;
}
