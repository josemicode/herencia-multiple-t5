#pragma once
#include <iostream>

using namespace std;

class Investigador{
	private:
		int orcid;
		int anyoInicio;
		string areaConocimiento;
	protected:
		string institucion;
	public:
		Investigador(int orcid, string institucion, int anyoInicio, string areaConocimento);
		int getOrcid();
		string Institucion();
		virtual string getAreaInvestigacion() = 0;
		int getAnyosExperiencia();
		virtual string toString();
		Investigador(const &Investigador otro);
		Investigador operator = (const &Investigador otro);
};
