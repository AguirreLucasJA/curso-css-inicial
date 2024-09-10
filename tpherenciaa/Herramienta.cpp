#include <iostream>   // lo necesito por que estoy usando COUT, ENDL.
using namespace std; // lo uso para no poner std::cout, std::endl, std::string.
#include "Herramienta.h"
/*
Herramienta::Herramienta()
{
    _peso = 0;
    _longitud = 0;
    _precioDeCompra = 0;
    _nombre = "";

}
*/
Herramienta::Herramienta(float peso, float longitud, float precioDeCompra)
{
    _nombre = "";
    _precioDeCompra = 0;
    setPrecioDeCompra(precioDeCompra);
    setPeso(peso);
    setLongitud(longitud);
    cout << "Construyendo herramienta con peso " << peso << ", longitud " << longitud << " y precioDeCompra " << precioDeCompra << endl;


}


void Herramienta::setPeso(float peso)
{
    if(peso > 0)
    {
        _peso = peso;
    }
}

void Herramienta::setLongitud(float longitud)
{
    if(longitud > 0)
    {
        _longitud = longitud;
    }
}

void Herramienta::setPrecioDeCompra(float precioDeCompra)
{
    if(precioDeCompra > 0)
    {
        _precioDeCompra = precioDeCompra;
    }

}

float Herramienta::getPeso()
{
    return _peso;
}

float Herramienta::getLongitud()
{
    return _longitud;
}

float Herramienta::getPrecioDeCompra()
{
    return _precioDeCompra;
}

void Herramienta::mostrarInformacion()
{
    cout << "Nombre: " << _nombre << endl;
    cout << "Peso: " << getPeso() << endl;
    cout << "Longitud: " << getLongitud() << endl;
    cout << "Precio de compra: " << getPrecioDeCompra() << endl;
}
