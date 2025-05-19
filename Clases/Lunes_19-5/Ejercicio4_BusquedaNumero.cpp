/*
    Ejercicios del repositorio 4, 6 de Clase 6 y 10 de for
    4) Búsqueda de un Número
    Pide N números, guárdalos en un arreglo y busca si un número dado por el usuario está en él.
*/
#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    bool esta = false;
    int nValor = 0;
    int nPregunta = 0;
    int arregloNumeros[5] = {};

    cout << "Bienvenido, ingrese 5 numeros: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> arregloNumeros[i];
    }

    cout << "Ahora, busque un numero: ";
    cin >> nPregunta;

    for (int i = 0; i < 5; i++)
    {
        if (nPregunta == arregloNumeros[i])
        {
            esta = true;
        }
    }
    if (esta)
    {
        cout << "Si, el numero: " << nPregunta << " Si esta";
    }
    else
    {
        cout << "No, el numero: " << nPregunta << " no esta";
    }
    return 0;
}