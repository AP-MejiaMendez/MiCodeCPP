/*--------------------|ARREGLOS (Arrays) en C++|--------------------*/

#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {5, 10, 15, 20, 25, 8};
    //Sizeof solo deuelve la cantidad de iteracciones que hace dentro de una variable array
    int tamano = (sizeof(numeros) / sizeof(numeros[0]));
    int suma = 0;

    for (int i = 0; i < tamano; i++)
    {
        suma += numeros[i];
    }

    float promedio = static_cast<float>(suma) / tamano;

    cout << "La suma de los elementos es: " << suma << endl;
    cout << "El promedio de los elementos es: " << promedio << endl;
    return 0;
}