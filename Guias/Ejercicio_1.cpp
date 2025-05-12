/*
    1) Dados dos enteros que se ingresan desde teclado, indicar si el primero
    es divisible entre el segundo, o si no lo es.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    int Num1 = 0, Num2 = 0;

    // Mensaje de contexto al usuario
    cout << "Welcome to the program that tells you if a number is divisible by another." << endl;

    cout << endl;

    // Solicitar datos
    cout << "Enter the first number: ";
    cin >> Num1;

    cout << "Enter the second number: ";
    cin >> Num2;

    cout << endl;

    // Verificación de divisibilidad
    if (Num2 == 0)
    {
        cout << "ERROR: You can't divide by 0." << endl;
    }
    else if (Num1 % Num2 == 0)
    {
        cout << Num1 << " is divisible by " << Num2 << "." << endl;
    }
    else
    {
        cout << Num1 << " is NOT divisible by " << Num2 << "." << endl;
    }
    //Fin del programa
    return 0;
}
