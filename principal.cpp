#include <iostream>
#include "PDI.h"
#include "Departamento.h"

using namespace std;

int main() {
    // Crear objetos PDI
    PDI pdi1("12345678A", "Jose", "Ojeda", 35, "Universidad Loyola", 2015, 123456, "Instituto J", 2003, "Ciencias");
    PDI pdi2("87654321B", "Marina", "Garcia", 40, "Universidad Z", 2010, 654321, "Instituto M", 2008, "Matemáticas");

    // Crear objetos punteros PDI
    PDI* pdi3 = new PDI("11111111C", "Pedro", "Martínez", 38, "Universidad A", 2012, 987654, "Instituto B", 2009, "Física");
    PDI* pdi4 = new PDI("22222222D", "Laura", "Sánchez", 45, "Universidad C", 2008, 456789, "Instituto D", 2007, "Química");

    // Mostrar características de los PDIs
    cout << "Características de pdi1:" << endl;
    cout << pdi1.toString() << endl;

    cout << "\nCaracterísticas de pdi2:" << endl;
    cout << pdi2.toString() << endl;

    cout << "\nCaracterísticas de pdi3:" << endl;
    cout << pdi3->toString() << endl;

    cout << "\nCaracterísticas de pdi4:" << endl;
    cout << pdi4->toString() << endl;

    // Comprobar si pdi1 es más veterano que pdi2
    cout << "\n¿Es pdi1 más veterano que pdi2?: ";
    if (pdi1.esMasVeterano(&pdi2)) {
        cout << "Sí" << endl;
    } else {
        cout << "No" << endl;
    }

    // Comprobar si pdi2 es más veterano que pdi3
    cout << "¿Es pdi2 más veterano que pdi3?: ";
    if (pdi2.esMasVeterano(pdi3)) {
        cout << "Sí" << endl;
    } else {
        cout << "No" << endl;
    }

    // Crear objeto Departamento "Metodos Cuantitativos"
    Departamento metodosCuantitativos("Metodos Cuantitativos", 3);

    // Insertar los PDIs en el Departamento
    metodosCuantitativos.insertar(pdi1);
    metodosCuantitativos.insertar(pdi2);
    metodosCuantitativos.insertar(*pdi3);

    // Mostrar los PDIs del Departamento
    cout << "\nPDIs en el Departamento Metodos Cuantitativos:" << endl;
    metodosCuantitativos.visualizar();

    // Crear un puntero a Departamento "Ing. Informatica"
    Departamento* ingInformatica = new Departamento("Ing. Informatica", 4);

    // Insertar los PDIs en el Departamento "Ing. Informatica"
    ingInformatica->insertar(*pdi1);
    ingInformatica->insertar(*pdi2);
    ingInformatica->insertar(*pdi3);
    ingInformatica->insertar(*pdi4);

    // Definir función getDepartamentoMasGrande
    string getDepartamentoMasGrande(Departamento* d1, Departamento* d2) {
        if (d1->getNumPDI() > d2->getNumPDI()) {
            return d1->getNombre();
        } else if (d2->getNumPDI() > d1->getNumPDI()) {
            return d2->getNombre();
        } else {
            return "Mismo numero de PDI";
        }
    }

    // Probar la función getDepartamentoMasGrande
    cout << "\nEl departamento con más profesores es: " << getDepartamentoMasGrande(&metodosCuantitativos, ingInformatica) << endl;

    // Liberar memoria para el puntero a Departamento "Ing. Informatica"
    delete ingInformatica;

    // Liberar memoria para los punteros a PDI
    delete pdi3;
    delete pdi4;

    return 0;
}
