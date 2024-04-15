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
		virtual string getAreaInvestigacion() = 0;
		int getAnyosExperiencia();
		string toString();
		Investigador(const &Investigador otro);
		Investigador operator = (const &Investigador otro);
};
