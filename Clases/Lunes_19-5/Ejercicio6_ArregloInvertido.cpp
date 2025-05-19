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

    cout << "Bienvenido, ingrese 7 numeros: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> nNumeros[i];
    }

    cout << "Arreglo en su forma original: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "Numero " << i << ":" << nNumeros[i] << endl;
    }

    for (int i = 0; i <= 7; i++)
    {
        nNumerosInvertido[i] = nNumeros[7 - i];
    }

    cout << "Arreglo invertido: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "Numero " << i + 1 << ":" << nNumerosInvertido[i] << endl;
    }

    return 0;
}