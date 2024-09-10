#include <iostream>
using namespace std;
#include "Destornillador.h"
/*
Destornillador::Destornillador()
{
    _nombre = "Destornillador";
}
*/
Destornillador::Destornillador(string tipoPunta, float peso, float longitud):Herramienta(peso,longitud,_precioDeCompra = 0){
_nombre = "Destornillador";
_tipoPunta = tipoPunta;
}

void Destornillador::setTipoPunta(string tipoPunta)
{
_tipoPunta = tipoPunta;
}


string Destornillador::getTipoPunta()
{
    return _tipoPunta;
}



void Destornillador::mostrarInformacion(){
Herramienta::mostrarInformacion();
cout << "Tipo de punta: " << _tipoPunta << endl;
}
