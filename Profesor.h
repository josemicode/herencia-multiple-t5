#pragma once
#include <iostream>

using namespace std;
typedef struct{
    string dni;
    string nombre;
    string apellidos;
    int edad;
}datosPersonales;

class Profesor {
    private:
		datosPersonales datos;
		int anyoInicio;

    protected:
		string institucion;

    public:
		Profesor(string dni, string nombre, string apellidos, int edad, string institucion, int anyoInicio);
		string getDni();
		string getInstitucion();
		virtual string getAreaDocencia() = 0;
		int getAnyosExperiencia();
		virtual string toString();
};