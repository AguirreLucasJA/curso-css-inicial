//Nombre:
//TP N°:1
//EJ N°:1
/*Comentarios:
La Bolsa de Comercio de la Ciudad de Buenos Aires brinda la información de la cotización de algunas acciones de la semana pasada.

Por cada acción se tiene cinco registros de cotización.

Cada cotización registra la siguiente información:
- Código de acción (entero)
- Precio apertura (float)
- Precio cierre (float)
- Volumen de venta (entero)

Los datos se encuentran agrupados por código de acción.
Hay cinco cotizaciones por cada acción.
El fin de los datos se indica con un código de acción igual a 0.


Se pide calcular e informar:
*A) Por cada acción, el promedio de volumen de venta.
-B) La cantidad de acciones que hayan registrado todas sus cotizaciones en alza. Es decir, el precio de cierre siempre sea mayor al precio de apertura.
C) La acción que más haya incrementado su valor en una cotización en particular. Es
decir, la diferencia entre el precio de apertura y precio de cierre más grande.
*D) La cantidad de cotizaciones en las que el precio no varió. Es decir, el precio de
apertura es igual al precio de cierre.
*/

#include <iostream>
using namespace std;
int main(void)
{

    int const COTIZACIONES = 1;
    int i, codigoAccion, volumenVenta;
    float precioApertura, precioCierre;

    //DECLARACIONES A)
    float pa_promedioVolVenta, pa_acuVolVenta;

    //DECLARACIONES B)
    int pb_cantCotizacionesEnAlza;
    bool pb_hayBajaEnCotizacion;


    //DECLARACIONES D)
    int pd_cantCotizacionesSinVariacion;


    cout << "Ingrese codigo de accion: ";
    cin >> codigoAccion;

    pb_cantCotizacionesEnAlza = 0;

    while (codigoAccion !=0)
    {
        pa_acuVolVenta = 0;
        pb_hayBajaEnCotizacion = 0;
        pd_cantCotizacionesSinVariacion = 0;

        for (i=0; i<COTIZACIONES; i++)
        {

            cout << "Ingrese precio de apertura: ";
            cin >> precioApertura;
            cout << "Ingrese precio de cierre: ";
            cin >> precioCierre;
            cout << "Ingrese volumen de venta: ";
            cin >> volumenVenta;

            //OPERACIONES A)
            pa_acuVolVenta += volumenVenta;

            //OPERACIONES B)
            if(precioCierre < precioApertura)
            {
                pb_hayBajaEnCotizacion = 1;
            }

            //OPERACIONES D)
            if (precioApertura == precioCierre)
            {
                pd_cantCotizacionesSinVariacion ++;
            }



        }//CORTE CICLO INTERNO
        //OPERACIONES A)
        pa_promedioVolVenta = pa_acuVolVenta / COTIZACIONES;

        //OPERACIONES B)
        if (!pb_hayBajaEnCotizacion)
        {
            pb_cantCotizacionesEnAlza ++;
        }

        //MOSTRAR A)
        cout << "A) El promedio de volumen de venta de la accion: " << codigoAccion << " es de: " << pa_promedioVolVenta << endl;


        cout << "Ingrese codigo de accion: ";
        cin >> codigoAccion;
    }//CORTE CICLO EXTERNO
    //MOSTRAR B)
    cout << "B) La cantidad de acciones que hayan registrado todas sus cotizaciones en alza son: " << pb_cantCotizacionesEnAlza << endl;
    //MOSTRAR D)
    cout << "D) La cantidad de cotizaciones en las que el precio no vario son: " << pd_cantCotizacionesSinVariacion << endl;

    return 0;

}

