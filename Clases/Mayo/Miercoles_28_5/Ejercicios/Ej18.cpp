/*
    18) Juego de Adivinanza con Intentos Limitados
    El usuario tiene 5 intentos para adivinar un número aleatorio entre 1 y 50.
*/
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
    srand(time(NULL));
    int numeroAleatorio = (rand() % 50) + 1;
    int intentos = 5;
    int numero = 0;

    cout << "Bienvenido ingrese un numero: ";
    cin >> numero;

    while (intentos != 0)
    {
        cout << endl
             << "NAleatorio: " << numeroAleatorio << endl;
        if (numeroAleatorio != numero)
        {
            cout << "NO, ese no es el numero. Intente denuevo" << endl;
            cout << "Le quedan: " << intentos << " intentos: ";
            cin >> numero;
            intentos--;
        }
        else
        {
            cout << "Felicidades, si adivino";
            return 0;
        }

        if(intentos == 0){
            cout<<endl<<"Se terminaron los intetos";
        }
    };
    return 0;
}