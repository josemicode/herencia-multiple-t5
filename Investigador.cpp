#include"Investigador.h"

using namespace std;

Investigador::Investigador(int orcid, string institucion, int anyoInicio, string areaConocimiento){
	this->orcid = orcid;
	this->institucion = institucion;
	this->anyoInicio = anyoInicio;
	this->areaConocimiento = areaConocimiento;
}

int Investigador::getOrcid(){
	return this->orcid;
}

string Investigador::getInstitucion(){
	return this->institucion;
}

int Investigador::getAnyosExperiencia(){
	return (2024-(this->anyoInicio));
}

string Investigador::toString(){
	string res = "\n- Codigo orcid: " + to_string(this->orcid) + "\n- Institucion: " + this->institucion
	+ "\n- Anyo de Inicio: " + to_string(this->anyoInicio) + "\n- Area de Conocimiento: " + this->areaConocimiento;
	return res;
}

Investigador::Investigador(const Investigador &otro){
	this->orcid = otro.orcid;
	this->areaConocimiento = otro.areaConocimiento;
	this->institucion = otro.institucion;
}

Investigador& Investigador::operator = (const Investigador &otro){
	this->areaConocimiento = otro.areaConocimiento;
	this->institucion = otro.institucion;
}

int main(){
	return 0;
}