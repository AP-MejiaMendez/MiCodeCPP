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
    int nPregunta = 0;
    int arregloNumeros[5] = {};

    // Mensaje de contexto al usuario
    cout << "Bienvenido, ingrese 5 numeros: " << endl;

    // Bucle para interar en las posiciones del arreglo y guardar lo que el usuario digite en esa posición hasta llegar al limite del arreglo
    for (int i = 0; i < 5; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> arregloNumeros[i];
    }

    cout << "Ahora, busque un numero: ";
    cin >> nPregunta;

    // Bucle para interar en las posiciones del arreglo e ir comparando si el digito que ingreso esta en el arreglo
    for (int i = 0; i < 5; i++)
    {
        if (nPregunta == arregloNumeros[i])
        {
            esta = true;
        }
    }

    // Condicional, si esta en el arreglo entonces muestra su respectivo mensaje
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