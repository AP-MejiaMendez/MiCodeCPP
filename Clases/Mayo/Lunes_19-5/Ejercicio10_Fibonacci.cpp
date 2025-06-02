/*
    Ejercicios del repositorio 4, 6 de Clase 6 y 10 de for
    10) Serie de Fibonacci
    Muestra los primeros N términos de la serie de Fibonacci.
*/
#include <iostream>
using namespace std;

int main()
{
    // Declaracion del limite de numeros
    int limiteFibonacci = 2;
    // Mensaje de contexto al usuario
    cout << "Bienvenido al programa que te muestra la serie de fibonacci!" << endl;
    cout << "Ingrese cuantos terminos de Fibonacci quieres ver: ";
    cin >> limiteFibonacci;
    // Condicional para que el usuario no pida 0 o menos terminos
    if (limiteFibonacci <= 0)
    {
        cout << "Digite un valor correcto, como que 0 o negativos terminos?" << endl;
    }
    else
    {
        // Declaración de los arrays a utilizar
        int resultadoFibonacci[limiteFibonacci] = {0, 1};
        cout << endl;
        cout << "Resultado: " << endl;
        // Bucle que itera en las posiciones de los resultados fibonacci para guardar la posicion anterior mas la posicion actual
        for (int i = 1; i <= limiteFibonacci; i++)
        {
            resultadoFibonacci[i + 1] = resultadoFibonacci[i - 1] + resultadoFibonacci[i];
            cout << i << ") " << resultadoFibonacci[i - 1] << " + " << resultadoFibonacci[i] << " = " << resultadoFibonacci[i + 1] << endl;
        }
    }
    return 0;
}