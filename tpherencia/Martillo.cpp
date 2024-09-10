#include <iostream>
using namespace std;
#include "Martillo.h"
/*
Martillo::Martillo(){
_nombre = "Martillo";

}
*/
Martillo::Martillo(string tipoCabeza, float peso, float longitud):Herramienta(peso,longitud,_precioDeCompra = 0){
_nombre = "Martillo";
_tipoCabeza = tipoCabeza;
}

void Martillo::setTipoCabeza(string tipoCabeza)
{
_tipoCabeza = tipoCabeza;
}


string Martillo::getTipoCabeza()
{
    return _tipoCabeza;
}


void Martillo::mostrarInformacion(){
Herramienta::mostrarInformacion();
cout << "Tipo de cabeza: " << _tipoCabeza << endl;
}
