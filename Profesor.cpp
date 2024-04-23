#include"Profesor.h"

using namespace std;

Profesor::Profesor(string dni, string nombre, string apellidos, int edad, string institucion, int anyoInicio){
	(this->datos).dni = dni;
	(this->datos).nombre = nombre;
	(this->datos).apellidos = apellidos;
	(this->datos).edad = edad;
	this->anyoInicio = anyoInicio;
	this->institucion = institucion;
}

string Profesor::getDni(){
	return (this->datos).dni;
}

string Profesor::getInstitucion(){
	return this->institucion;
}

int Profesor::getAnyosExperiencia(){
	return (2024-(this->anyoInicio));
}

string Profesor::toString(){
	string res = "\n- DNI: " + (this->datos).dni + "\n- Nombre: " + (this->datos).nombre
	+ "\n- Apellidos: " + (this->datos).apellidos + "\n- Edad: " + to_string((this->datos).edad)
	+ "\n- Anyo de Inicio: " + to_string(this->anyoInicio) + "\n- Institucion: " + this->institucion;
	return res;
}

int main(){
	return 0;
}