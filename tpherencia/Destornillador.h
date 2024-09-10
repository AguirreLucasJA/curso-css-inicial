#pragma once
#include "Herramienta.h"

class Destornillador: public Herramienta{
private:
string _tipoPunta;

public:
//Destornillador();
Destornillador(string tipoPunta, float peso, float longitud);

void setTipoPunta(string tipoPunta);
string getTipoPunta();

void mostrarInformacion();

};
