#include <iostream>
using namespace std;

class CampoElectrico : public CampoVectorial {
    private:
    float carga;
    float posicion[2];
    static float epsilon;

    public:
    CampoElectrico();
    CampoElectrico(float carga, float* posicion, string nombre);
    float calcularIntensidad(float* posicion);
    float* calcularDireccion(float* posicion);
    float getCarga();
    void setCarga(float carga);
    string toString;
}