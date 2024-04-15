#include <iostream>
using namespace std;

class CampoElectricoEsfera : public CampoElectrico {
    private:
    float radio_esfera;
     
    public:
    CampoElectricoEsferaConductora();
    CampoElectricoEsferaConductora(float radio_esfera, float carga, float* posicion, string nombre);
    float calcularIntensidad(float* posicion);
    float *calcularCampo(float* posicion);
    string toString;
};