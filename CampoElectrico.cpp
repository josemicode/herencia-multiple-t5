#include "CampoElectrico.h"
#include "CampoVectorial.h"
#include <iostream>
#include <cmath>

using namespace std;

float CampoElectrico::epsilon = 1;

CampoElectrico::CampoElectrico() {
    carga = 0.0;
    posicion[0] = 0.0;
    posicion[1] = 0.0;
    nombre = "";
};

CampoElectrico::CampoElectrico(float carga, float* posicion, string nombre) {
    this->carga = carga;
    this->posicion[0] = posicion[0];
    this->posicion[1] = posicion[1];
    this-> nombre = nombre;
};

float CampoElectrico::calcularIntensidad(float* posicion) {
    float intensidad = carga * (1 / (4 * 3.1415 * epsilon * pow(dist(posicion, posicion_carga), 2.0)));
    return intensidad;
};

float* CampoElectrico::calcularDireccion(float* posicion) {
    // Cálculo de la dirección del campo eléctrico
    float* direccion = new float[2];
    direccion[0] = (posicion[0] - posicion_carga[0]) / dist(posicion, posicion_carga);
    direccion[1] = (posicion[1] - posicion_carga[1]) / dist(posicion, posicion_carga);
    return direccion;
};

float CampoElectrico::getCarga() {
    return carga;
};

void CampoElectrico::setCarga(float carga) {
    this->carga = carga;
};
