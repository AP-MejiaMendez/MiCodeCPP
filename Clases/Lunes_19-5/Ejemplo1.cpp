/*--------------------|ARREGLOS (Arrays) en C++|--------------------*/

#include <iostream>
using namespace std;

int main()
{
    int numeros[5] = {1, 2, 3, 4, 5};
    cout << "Contendo del arreglo" << endl;

    // Recorre el arreglo
    for (int i = 0; i >= 0; i++)
    {
        cout << "Elemento en la posicion: " << i << " : " << numeros[i];
    }
    return 0;
}