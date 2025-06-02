/*
    13) Serie de Fibonacci
    Muestra los primeros N términos de la serie de Fibonacci utilizando while.
*/
#include <iostream>
using namespace std;
int main()
{
    int terminosN = 0;
    int counter = 1;
    int fibonacciA = 0;
    int fibonacciB = 1;
    int fibonacciC = 0;

    cout << "Ingrese la cantidad de terminos que desee ver: ";
    ;
    cin >> terminosN;

    while (counter <= terminosN)
    {
        fibonacciC = fibonacciA + fibonacciB;
        cout << endl
             << counter << ") " << fibonacciA << "+" << fibonacciB << "=" << fibonacciC;
        counter++;
        fibonacciA = fibonacciB;
        fibonacciB = fibonacciC;
    }

    return 0;
}