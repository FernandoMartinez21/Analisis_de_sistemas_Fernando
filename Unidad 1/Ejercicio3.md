# DESCRIPCION 
Realize un programa tal quedado como dato la cantidad que que hablo un cliente a unadeterminante geografica muestre en pantalla el total de pagar. Toma en cuenta cuenta la siguiente tabla 

Codigo                              Area                                     costo/minuto
A                                  Guatemala                                    Q 3.12
B                                  Italia                                      Q 5.00
C                                  México                                      Q 2.10
D                                  Costa Rica                                  Q 4.75

# SOLUCION DEL PROBLEMA
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double TARIFAS[] = {3.12, 5.00, 2.10, 4.75};
    const string AREAS[] = {"Guatemala", "Italia", "México", "Costa Rica"};
    const int NUM_AREAS = sizeof(TARIFAS) / sizeof(TARIFAS[0]);

    char codigo;
    int minutos;
    double totalPagar = 0.0;

    cout << "Ingrese el código de área (A, B, C, D): ";
    cin >> codigo;

    cout << "Ingrese la cantidad de minutos hablados: ";
    cin >> minutos;


    int indiceArea = -1;
    for (int i = 0; i < NUM_AREAS; ++i) {
        if (codigo == 'A' + i) {
            indiceArea = i;
            break;
        }
    }

    if (indiceArea != -1) {
        totalPagar = TARIFAS[indiceArea] * minutos;
        cout << "Área: " << AREAS[indiceArea] << endl;
        cout << "Total a pagar: Q " << fixed << setprecision(2) << totalPagar << endl;
    } else {
        cout << "Código de área inválido." << endl;
    }

    return 0;
}
