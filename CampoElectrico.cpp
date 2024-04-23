#include "CampoElectrico.h"
#include <iostream>
#include  <cmath>

using namespace std;

float CampoElectrico::epsilon = 1;

void CampoElectrico :: setCarga(float carga){
    carga = carga;
};

float CampoElectrico ::getCarga(){
    return this->carga;
};

float CampoElectrico ::calcularIntensidad(float* posicion){
    float intensidad = carga * (1/4 * 3.1415 * epsilon * pow(dist(posicion, posicion_carga), 2.0)); // de donde sale posicion_carga?
    return intensidad;
};

float* CampoElectrico :: calcularDireccion(float* posicion){

};