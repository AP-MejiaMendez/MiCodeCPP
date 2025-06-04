/*
    while(18)
        Juego de Adivinanza con Intentos Limitados
        El usuario tiene 5 intentos para adivinar un número aleatorio entre 1 y 50.
*/

#include <iostream>
using namespace std;

int main()
{
    int numeroAdivinar = 15;
    int numeroAdivinado = 0;
    int intentos = 5;
    string message = "";

    cout << "Bienvenido al juego de adivinar un numero" << endl;

    while (intentos != 0)
    {
        cout << endl
             << "Ingrese un numero: ";
        cin >> numeroAdivinado;

        if (numeroAdivinado != numeroAdivinar)
        {
            if (numeroAdivinado > numeroAdivinar)
            {
                message = "El numero ingresado es mayor al que debe de adivinar";
            }
            else if (numeroAdivinado < numeroAdivinar)
            {
                message = "El numero ingresado es menor al que debe de adivinar";
            }

            intentos--;

            cout << endl
                 << endl
                 << message + "Le quedan: " << intentos << ") Intentos";
        }
        else
        {
            cout << "Ha adivinado el numero";
            return 0;
        }
    }

    return 0;
}