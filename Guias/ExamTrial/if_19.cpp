/*
    if(19)
        Tarifa de Luz Eléctrica Calcula la tarifa según el consumo:
        menor a 100 kWh, tarifa baja;
        entre 100 y 200 kWh, tarifa media;
        más de 200 kWh, tarifa alta.
*/

#include <iostream>
using namespace std;

int main()
{
    // Varibles
    int consumoEnergia = 0;
    string message = "";

    // Recepcion de datos
    cout << "Bienvenido, al programa de calculacion de tarifa electrica\nIngrese su consumo energetico:";
    cin >> consumoEnergia;

    // Logica
    if (consumoEnergia < 0)
    {
        message = "Ingrese un valor valido";
    }
    else if (consumoEnergia < 100)
    {
        message = "Tarifa baja";
    }
    else if ((consumoEnergia >= 100) && (consumoEnergia <= 200))
    {
        message = "Tarifa media";
    }
    else
    {
        message = "Tarifa alta";
    }
    cout << message;

    return 0;
}