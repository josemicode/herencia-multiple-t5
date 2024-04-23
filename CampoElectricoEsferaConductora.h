#pragma once 
#include <iostream>
#include "CampoElectrico.h"
#include "CampoVectorial.h"
using namespace std;

class CampoElectricoEsfera : public CampoElectrico {
    private:
    float radio_esfera;
     
    public:
    CampoElectricoEsfera();
    CampoElectricoEsfera(float radio_esfera, float carga, float* posicion, string nombre);
    float calcularIntensidad(float* posicion);
    float *calcularCampo(float* posicion);
    string toString();
};