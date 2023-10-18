# DESCRIPCION
En un hospital sea echo un estudio sobre los pacientes registrado durante los ultimos 10 años con el objetivo de hacer una
aproccimacion de los costos de internacion por los pacientes Se obtubo un costro promedio segun el tipo de enfermedad que a aqueja al paciente 
Ademas se tubo que in promedio todos los pacientes con la edad 24 y 22 años implican un costo del 10% la siguiente tabla expresa los costos diarios por enfermedad
la tabla es la siguiente 
tipo de enfermedad                              costo/dia
1                                                Q 250
2                                                Q 300 
3                                                Q 125
4                                                Q 100
# SOLUCION DEL DESCRIPCION
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
    const int numEnfermedades = 4;
    int costosPorEnfermedad[numEnfermedades] = {250, 300, 125, 100};

    int pacientesPorEdad24 = 0;
    int pacientesPorEdad22 = 0;
    int costoTotal = 0;

    for (int i = 0; i < 10; ++i) {
        int tipoEnfermedad;
        int edadPaciente;

        cout << "Año " << i + 1 << ":" << endl;

        cout << "Tipo de enfermedad (1, 2, 3 o 4): ";
        cin >> tipoEnfermedad;


        if (tipoEnfermedad < 1 || tipoEnfermedad > numEnfermedades) {
            cout << "Tipo de enfermedad no válido. Saliendo..." << endl;
            return 1;
        }

        cout << "Edad del paciente: ";
        cin >> edadPaciente;


        int costoDiario = costosPorEnfermedad[tipoEnfermedad - 1];
        if (edadPaciente == 24 || edadPaciente == 22) {
            costoDiario = costoDiario * 11 / 10;
            if (edadPaciente == 24) {
                pacientesPorEdad24++;
            } else {
                pacientesPorEdad22++;
            }
        }

        costoTotal += costoDiario;
    }


    int costoPromedio = costoTotal / 10;

    cout << "Costo promedio de internación por día: Q" << costoPromedio << endl;
    cout << "Pacientes con edad 24 años y costo adicional: " << pacientesPorEdad24 << endl;
    cout << "Pacientes con edad 22 años y costo adicional: " << pacientesPorEdad22 << endl;

    return 0;
}
