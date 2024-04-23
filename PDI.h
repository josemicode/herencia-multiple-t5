#pragma once
#include <iostream>
#include"Profesor.h"
#include"Investigador.h"

using namespace std;

class PDI: public Profesor, private Investigador{
	private:
	protected:
	public:
		int identificador;
		PDI(string dni, string nombre, string apellidos, int edad, string institucionProfesor, int anyoInicioProfesor, int orcid, string institucionInvestigador, int anyoInicioInvestigador, string areaConocimento);
		double getMediaAnyosExperiencia();
		void actualizaInstitucion(string inst);
		virtual string toString();
		virtual string getAreaDocencia();
		bool esMasVeterano(PDI *objPDI);
		PDI(const Profesor &otro);
		PDI& operator = (const Profesor &otro);
};