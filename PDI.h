class PDI: public Profesor, private Investigador{
	private:
	protected:
	public:
		int identificador;
		PDI(string dni, string nombre, string apellidos, int edad, string institucionProfesor, int anyoInicioProfesor, int orcid, string institucionInvestigador, int anyoInicioInvestigador, string areaConocimento);
		double getMediaAnyosExperiencia();
		void actualizaInstitucion(string inst);
		virtual string toString();
		virtual getAreaDocencia();
		bool esMasVeterano(PDI *objPDI);
		Profesor (const &Profesor otro);
		Profesor operator = (const &Profesor otro);
};