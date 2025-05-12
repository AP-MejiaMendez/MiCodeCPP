/*
    6) Indicar si un entero c, está o no contenido en un intervalo [a, b].
*/

#include <iostream>
using namespace std;

int main()
{
    int c = 0, a = 0, b = 0;
    cout << "Bienvenido, le diremos si un entero c esta dentro de un rango de a y b" << endl;
    cout << endl;

    cout << "Ingrese el inicio del intervalo: ";
    cin >> a;
    cout << "Ingrese el final del intervalo: ";
    cin >> b;
    cout << "Ingrese el numero que quiera que verifiquemos: ";
    cin >> c;

    if (b < a)
    {
        cout << endl<<"El final del intervalo no puede ser menor que el inicio" << endl;
    }
    else
    {
        if (c >= a && c <= b)
        {
            cout << endl
                 << "El numero si se encuentra en el intervalo." << endl;
        }
        else
        {
            cout << endl
                 << "El numero no se encuentra en el intervalo." << endl;
        }
    }

    return 0;
}