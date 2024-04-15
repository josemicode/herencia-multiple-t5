#pragma once
#include <iostream>

using namespace std;
typedef struct datosPersonales {
    string dni;
    string nombre;
    string apellidos;
    int edad;
};

class Profesor {
    private:
    datosPersonales datos;
    int anyoInicio;

    protected:
    string institucion;

    public:
    
};