#pragma once
#include "Taladro.h"
class TaladroPercutor: public Taladro
{

private:
int _golpesPorMinuto;

public:
//TaladroPercutor();
TaladroPercutor(int golpesPorMinuto,float potencia, float peso, float longitud);

void setGolpesPorMinuto(int golpesPorMinuto);

int getGolpesPorMinuto();

void mostrarInformacion();
};
