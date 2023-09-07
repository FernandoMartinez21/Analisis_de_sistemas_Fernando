# DESCRIPCION 
Realice un programa que permita calcular el promedio de X notas utilizando ciclo for y muestre en pantalla si el alumnno aprobo o reprobo el grado 
# SOLUCION DEL PROBLEMA 
#include <iostream>

using namespace std;

int main() {
    int numNotas;
    int total = 0;

    cout << "Ingrese el número de notas: ";
    cin >> numNotas;

    for (int i = 0; i < numNotas; ++i) {
        int nota;
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> nota;
        total += nota;
    }

    int promedio = total / numNotas;

    cout << "El promedio de las " << numNotas << " notas es: " << promedio << endl;

    // Establecer un puntaje mínimo de aprobación (por ejemplo, 60)
    int puntajeAprobacion = 60;

    if (promedio >= puntajeAprobacion) {
        cout << "El alumno ha aprobado el grado." << endl;
    } else {
        cout << "El alumno ha reprobado el grado." << endl;
    }

    return 0;
}
