/*
    Ejercicios del repositorio 4, 6 de Clase 6 y 10 de for
    6) Invertir un Arreglo
    Llena un arreglo con N números e invierte el orden de los elementos.
*/
#include <iostream>
using namespace std;

int main()
{
    // Declaracion de variabes
    int nNumeros[7];
    int nNumerosInvertido[7];

    // Mensaje de contexto
    cout << "Bienvenido, ingrese 7 numeros: " << endl;

    // Bucle para interar en las posiciones del arreglo y guardar lo que el usuario digite en esa posición hasta llegar al limite del arreglo
    for (int i = 0; i < 7; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> nNumeros[i];
    }

    // Bucle para interar en las posiciones del arreglo del usuario y guardar en otro arreglo las posiciones inevrtidas de ese
    for (int i = 0; i < 7; i++)
    {
        nNumerosInvertido[i] = nNumeros[7 - (i + 1)];
    }

    cout << endl;
    cout << "Arreglo en su forma original: " << endl;

    // Bucle para interar en las posiciones del arreglo del usuario para mostrarlas
    for (int i = 0; i < 7; i++)
    {
        cout << "Numero " << i + 1 << ": " << nNumeros[i] << endl;
    }

    cout << endl;
    cout << "Arreglo invertido: " << endl;

    // Bucle para interar en las posiciones del arreglo ivertido para mostrarlas
    for (int i = 0; i < 7; i++)
    {
        cout << "Numero " << i + 1 << ": " << nNumerosInvertido[i] << endl;
    }

    return 0;
}