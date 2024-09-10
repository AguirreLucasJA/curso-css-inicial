#include <iostream>
using namespace std;
#include "TaladroPercutor.h"
/*
TaladroPercutor::TaladroPercutor(){
_nombre = "Taladro percutor";
_golpesPorMinuto = 0;
}
*/
TaladroPercutor::TaladroPercutor(int golpesPorMinuto, float potencia,  float peso, float longitud):Taladro(potencia, peso, longitud){
_nombre = "Taladro percutor";
_golpesPorMinuto = golpesPorMinuto;
}


void TaladroPercutor::setGolpesPorMinuto(int golpesPorMinuto){
if(golpesPorMinuto > 0)
    {
        _golpesPorMinuto = golpesPorMinuto;
    }
}

int TaladroPercutor::getGolpesPorMinuto(){
return _golpesPorMinuto;
}

void TaladroPercutor::mostrarInformacion(){
Taladro::mostrarInformacion();
cout << "Golpes por minuto: " << _golpesPorMinuto << endl;

}
