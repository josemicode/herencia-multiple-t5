#include "CampoElectrico.h"
#include "CampoElectricoEsferaConductora.h"
#include "CampoVectorial.h"
#include <iostream>
#include <cmath>

CampoElectricoEsfera::CampoElectrico() {
};

CampoElectricoEsfera::CampoElectricoEsfera(float radio_esfera, float carga, float* posicion, string nombre) : CampoElectrico(carga, posicion, nombre) {
    this->radio_esfera = radio_esfera;
    this->nombre = nombre;
};

float CampoElectricoEsfera::calcularIntensidad(float* posicion) {
    float intensidad = 0.0;
    float distancia = dist(posicion, posicion_carga);
    if (distancia < radio_esfera) {
        intensidad = 0.0;
    } else {
        intensidad = 1 / (4 * 3.1415 * epsilon * pow(distancia, 2));
    }
    return intensidad;
};

float* CampoElectricoEsfera::calcularCampo(float* posicion) {
    float* campo = new float[2];
    float distancia = dist(posicion, posicion_carga);
    if (distancia < radio_esfera) {
        campo[0] = 0.0;
        campo[1] = 0.0;
    } else {
        campo[0] = carga * (posicion[0] - posicion_carga[0]) / distancia;
        campo[1] = carga * (posicion[1] - posicion_carga[1]) / distancia;
    }
    return campo;
};

string CampoElectricoEsfera::toString() {
    string info = "Campo Electrico Esfera: " + nombre + "\n";
    info += "Carga: " + to_string(carga) + "\n";
    info += "Posicion de la carga: (" + to_string(posicion_carga[0]) + ", " + to_string(posicion_carga[1]) + ")\n";
    info += "Radio de la esfera: " + to_string(radio_esfera) + "\n";
    return info;
};
