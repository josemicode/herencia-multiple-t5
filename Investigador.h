class Investigador{
	private:
		int orcid;
		int anyoInicio;
		string areaConocimiento;
	protected:
		string institucion;
	public:
		Investigador(orcid, institucion, anyoInicio, areaConocimento);
		virtual string getAreaInvestigacion() = 0;
		int getAnyosExperiencia();
		string toString();
		Investigador(const &Investigador otro);
		Investigador operator = (const &Investigador otro);
};
