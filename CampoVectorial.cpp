#include <iostream>
#include "CampoVectorial.h"

using namespace std;


CampoVectorial::CampoVectorial(string nombre) {
    this->nombre = nombre;
}

string CampoVectorial::getNombre() {
    return nombre;
}

//faltan funciones por terminar