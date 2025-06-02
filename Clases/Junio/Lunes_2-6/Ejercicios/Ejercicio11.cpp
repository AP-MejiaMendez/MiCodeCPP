/*
    Ordenar un arreglo en forma ascendente
*/
#include <iostream>
using namespace std;

void Ordenar()
{
    int arreglo[5] = {1, 5, 3, 2, 4};
    for (int i = 0; i < 5; i++)
    {
        if (arreglo[i] < arreglo[i + 1])
        {
            arreglo[i] = arreglo[i];
        }
        else if (arreglo[i] > arreglo[i+1])
        {
            arreglo[i+1] = arreglo[i];
            arreglo[i] = arreglo[i+1];
        }
    }
    cout << "El areglo ordenado es: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arreglo[i];
    }
}

int main()
{
    Ordenar();
    return 0;
}