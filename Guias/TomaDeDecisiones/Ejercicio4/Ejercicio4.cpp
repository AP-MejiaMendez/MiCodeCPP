/*
    4) Dado un número entero, indicar a qué día de la semana corresponde.
    El número ingresado deberá estar entre 1 y 7, si no lo está, emita un
    mensaje de error
*/
#include <iostream>
using namespace std;

int main()
{
    int Num = 0;
    cout << "Ingrese un numero entero y le diremos que dia de la semana pertenece" << endl;
    cin >> Num;

    switch (Num)
    {
    case 1:
        cout << "Es LUNES" << endl;
        break;
    case 2:
        cout << "Es MARTES" << endl;
        break;
    case 3:
        cout << "Es MIERCOLES" << endl;
        break;
    case 4:
        cout << "Es JUEVES" << endl;
        break;
    case 5:
        cout << "Es VIERNES" << endl;
        break;
    case 6:
        cout << "Es SABADO" << endl;
        break;
    case 7:
        cout << "Es DOMINGO" << endl;
        break;

    default:
        cout << "ERROR: No existe día de la semana asociado con ese numero" << endl;
        break;
    }

    return 0;
}