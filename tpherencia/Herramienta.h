#pragma once
#include <string>// lo puse una sola vez en el .h de clase padre
//y no hizo falta en ponerlo en los .h de los hijos / nietos;
class Herramienta
{
private:
float _peso;
float _longitud;

protected:
string _nombre;
float _precioDeCompra;


public:

//Herramienta();
Herramienta(float peso, float longitud,float precioDeCompra);


void setPeso(float peso);
void setLongitud(float longitud);
void setPrecioDeCompra(float precioDeCompra);

float getPeso();
float getLongitud();
float getPrecioDeCompra();

void mostrarInformacion();

};

