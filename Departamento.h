#pragma once
#include<iostream>
#include"PDI.h"
class Departamento{
	private:
		string nombre;
		int numMax;
		PDI pdis[];
		int numPDI;
	public:
		Departamento(string nombre, int numMax);
		~Departamento();
		string getNombre();
		int getNumMax();
		void insertar(PDI elemento);
		int getNumPDI();
		void visualizar();
};