#pragma once 
#include <iostream>
using namespace std;

class CampoVectorial {
    private: 
    string nombre;

    public:
    CampoVectorial();
    CampoVectorial(string nombre);
    virtual float calcularIntensidad(float posicion) = 0;
    virtual float* calcularDireccion(float posicion) = 0;
    string getNombre();
    static float dist(float* punto1, float* punto2);
    string toString;
};
