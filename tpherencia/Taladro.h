#pragma once
#include "Herramienta.h"
class Taladro: public Herramienta
{
private:
float _potencia;


public:
//Taladro();
Taladro(float potencia, float peso, float longitud);

void setPotencia(float potencia);

float getPotencia();


void mostrarInformacion();

};

