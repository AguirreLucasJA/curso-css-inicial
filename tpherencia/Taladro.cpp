#include <iostream>
using namespace std;
#include "Taladro.h"
/*
Taladro::Taladro()
{
    _nombre = "Taladro";
    _potencia = 0;
}
*/
Taladro::Taladro(float potencia, float peso, float longitud):Herramienta(peso,longitud,_precioDeCompra = 0){
_nombre = "Taladro";
_potencia = potencia;
}

void Taladro::setPotencia(float potencia)
{
    if(potencia > 0)
    {
        _potencia = potencia;
    }
}

float Taladro::getPotencia()
{
    return _potencia;
}

void Taladro::mostrarInformacion(){
Herramienta::mostrarInformacion();
cout << "Potencia: " << _potencia << endl;
}
