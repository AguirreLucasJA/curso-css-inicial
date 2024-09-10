#include <iostream>

using namespace std;

#include "Herramienta.h"
#include "Martillo.h"
#include "Destornillador.h"
#include "Taladro.h"
#include "TaladroPercutor.h"

int main()
{
Martillo m1("Cuadrada",1.0,20.01,33);//SI LE SACAS EL PRECIO DE COMPRA "33" FUNCIONA Y LO INSTANCIA CON PRECIO DE COMPRA 0...
Destornillador d1("redonda", 1, 5);// ASI SI ANDA NO LE PASE EL PRECIO DE COMPRA Y LO ESTABLECE EN 0...
Taladro t1(1100,1.5,0.5);
cout << "\tActividad 1)" << endl;
m1.mostrarInformacion();
cout << endl;
d1.mostrarInformacion();
cout << endl;
t1.mostrarInformacion();
cout << endl;

cout << "----------------------------------------" << endl;
TaladroPercutor tp1(1500,1200,1,2);
tp1.mostrarInformacion();
cout << endl;

    return 0;
}
// porque cuando creamos un objeto Martillo con el constructor sin parametros le asigna valores a las propiedades peso y longitud.

//RTA:LAS CLASES DERIVADAS LLAMAN POR DEFECTO AL CONSTRUCTOR VACIO DE LA CLASE BASE
//ej: ver constuctor Herramienta.cpp que hacemos que llame al constructor con parametros de HERRAMIENTA

//cuando creas una propiedad STRING y no le asignas ningun valor contiene por defecto una cadena vacia "".

// EL EJERCICIO NO PEDIA HACER CONSTRUCTORES SIN PARAMETROS, SI O SI AL CREAR UN OBJETO TENIAS QUE PASARLE LOS PARAMETROS, LO HICE PARA PRECTICAR.
