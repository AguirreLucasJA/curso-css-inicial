#pragma once
#include "Herramienta.h"

class Martillo: public Herramienta{

private:
string _tipoCabeza;


public:
//Martillo();
Martillo(string tipoCabeza, float peso, float longitud);

void setTipoCabeza(string tipoCabeza);
string getTipoCabeza();

void mostrarInformacion();


};

