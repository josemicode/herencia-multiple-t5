#include "CampoVectorial.h"
#include <cmath>
#include <iostream>

CampoVectorial::CampoVectorial() {}

CampoVectorial::CampoVectorial(string nombre) {
    this->nombre = nombre;
};

string CampoVectorial::getNombre() {
    return nombre;
};

float CampoVectorial::dist(float* punto1, float* punto2) {
    float distancia = sqrt(pow(punto2[0] - punto1[0], 2) + pow(punto2[1] - punto1[1], 2));
    return distancia;
};

string CampoVectorial::toString() {
    return "Campo Vectorial: " + nombre;
};
