#include <iostream>
#include <limits>
using namespace std;

void desplegarMenu() {
    cout << "\n=== Operaciones Matemáticas ===" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccione una opción: ";
}

bool entradaValida() {
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada no válida. Intente nuevamente.\n";
        return false;
    }
    return true;
}

int main() {
    int opcion;
    double numero1, numero2;

    do {
        desplegarMenu();
        cin >> opcion;

        if (!entradaValida()) continue;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer valor: ";
            cin >> numero1;
            if (!entradaValida()) continue;

            cout << "Ingrese el segundo valor: ";
            cin >> numero2;
            if (!entradaValida()) continue;
        }

        switch (opcion) {
            case 1:
                cout << "El resultado de la suma es: " << (numero1 + numero2) << endl;
                break;
            case 2:
                cout << "El resultado de la resta es: " << (numero1 - numero2) << endl;
                break;
            case 3:
                cout << "El resultado de la multiplicación es: " << (numero1 * numero2) << endl;
                break;
            case 4:
                if (numero2 == 0) {
                    cout << "Error: No es posible dividir entre cero." << endl;
                } else {
                    cout << "El resultado de la división es: " << (numero1 / numero2) << endl;
                }
                break;
            case 5:
                cout << "Finalizando el programa..." << endl;
                break;
            default:
                cout << "Selección incorrecta. Intente nuevamente." << endl;
        }
    } while (opcion != 5);

    return 0;
}
