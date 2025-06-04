/*
    array(5)
        Contar Números Pares e Impares
        Llena un arreglo con N números y cuenta cuántos son pares y cuántos son impares.
*/
#include <iostream>
using namespace std;

int main()
{
    int cantidadN = 0;
    int numerosN[cantidadN] = {};

    int pares = 0;
    int impares = 0;

    cout << "Bienvenido al programa que cuenta numeros pares e impares, de una lista de numeros \n \nIngrese la cantidad de numeros a evaluar: ";
    cin >> cantidadN;

    cout << "Ahora ingrese los numeros: " << endl
         << endl;

    for (int i = 0; i < cantidadN; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numerosN[i];
    }

    for (int i = 0; i < cantidadN; i++)
    {
        if (numerosN[i] % 2 == 0)
        {
            pares++;
        }
        else if (numerosN[i] % 2 != 0)
        {
            impares++;
        }
    }

    cout << endl
         << "Cantidad de pares: " << pares << endl
         << "Cantidad de impares: " << impares << endl;

    return 0;
}