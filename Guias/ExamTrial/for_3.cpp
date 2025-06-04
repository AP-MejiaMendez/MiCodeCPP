/*
    for(3)
        Suma de los Primeros N Números
        Solicita un número N al usuario y calcula la suma de los primeros N números naturales.
*/
#include <iostream>
using namespace std;

int main()
{
    int numeroN = 0;
    int result = 0;

    cout << "Bienvenido al programa que calcula la suma de N numeros\nIngrese un numero: ";
    cin >> numeroN;

    for (int i = 1; i <= numeroN; i++)
    {
        result += i;
    }
    cout << "El resultado es: " << result;

    return 0;
}