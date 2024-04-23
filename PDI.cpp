#include"PDI.h"

using namespace std;

PDI::PDI(string dni, string nombre, string apellidos, int edad, string institucionProfesor, int anyoInicioProfesor, int orcid, string institucionInvestigador, int anyoInicioInvestigador, string areaConocimento)
:Profesor(dni, nombre, apellidos, edad, institucionProfesor, anyoInicioProfesor), Investigador(orcid, institucionInvestigador, anyoInicioInvestigador, areaConocimento){}

/*	Profesor::datos.dni = dni;
	Profesor::datos.nombre = nombre;
	Profesor::datos.apellidos = apellidos;
	Profesor::datos.edad = edad;
	Profesor::institucion = institucionProfesor;
	Profesor::anyoInicio = anyoInicioProfesor;
	Investigador::orcid = orcid;
	Investigador::institucion = institucionInvestigador;
	Investigador::anyoInicio = anyoInicioInvestigador;
	Investigador::areaConocimento = areaConocimento;
	
	Profesor(dni, nombre, apellidos, edad, institucionProfesor, anyoInicioProfesor);
	Investigador(orcid, institucionInvestigador, anyoInicioInvestigador, areaConocimento);
*/

double PDI::getMediaAnyosExperiencia(){
	double media = (Profesor::getAnyosExperiencia() + Investigador::getAnyosExperiencia());
	media /= 2;
	return media;
}

void PDI::actualizaInstitucion(string inst){
	Profesor::institucion = inst;
	Investigador::institucion = inst;
}

string PDI::toString(){
	return Investigador::toString();
}

string PDI::getAreaDocencia(){
	string area;
	cout << "Por favor, introduzca el area de docencia del PDI: " << endl;
	cin >> area;
	return area;
}

bool PDI::esMasVeterano(PDI *objPDI){
	double a = this->getMediaAnyosExperiencia();
	double b = objPDI->getMediaAnyosExperiencia();
	if(a!=b){
		return (a > b);
	}
	double c = this->Profesor::getAnyosExperiencia();
	double d = objPDI->Profesor::getAnyosExperiencia();
	return (c > d);
}

PDI::PDI(const Profesor &otro){
	this->dni = otro.getDNI();
	this->institucion = otro.getInstitucion();
}

PDI& PDI::operator = (const Profesor &otro){
	this->Profesor::datos = otro.datos;
}

int main(){
	return 0;
}