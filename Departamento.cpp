#include <iostream>
#include "Departamento.h"

using namespace std;

    Departamento(string nombre, int numMax) {
        this->nombre = nombre;
        this->numMax = numMax;
        this->pdis = new PDI[numMax]; // Asignación de memoria dinámica para el array de PDI
        this->numPDI = 0; // Inicialización del número de PDI a cero
    }

    ~Departamento() {
        delete[] pdis; // Liberar la memoria asignada dinámicamente para el array de PDI
    }

    string getNombre() {
        return nombre;
    }

    int getNumMax() {
        return numMax;
    }

    void insertar(PDI elemento) {
        if (numPDI < numMax) {
            pdis[numPDI] = elemento; // Añadir el PDI al array
            numPDI++; // Incrementar el contador de PDIs
        } else {
            cout << "No hay espacio en el departamento para el PDI " << elemento.getDni() << endl;
        }
    }

    int getNumPDI() {
        return numPDI;
    }

    void visualizar() {
        cout << "Departamento: " << nombre << endl;
        for (int i = 0; i < numPDI; ++i) {
            cout << "PDI " << i + 1 << ":" << endl;
            cout << pdis[i].toString() << endl; // Imprimir la información del PDI
        }
    }
};