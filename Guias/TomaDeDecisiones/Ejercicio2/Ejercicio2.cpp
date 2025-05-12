/*
    2) Dados dos enteros que se ingresan desde teclado, indicar si el mayor
    de ellos es divisible entre el menor.
*/
#include <iostream>
using namespace std;
int main()
{
    // Declaración de variables
    int Num1 = 0, Num2 = 0;
    int Minor = 0, Mayor = 0;

    // Mensaje de contexto
    cout << "Welcome to the program that tells you if the greater number of two numbers is divisible by the lesser" << endl;
    cout << endl;

    // Solicitar datos
    cout << "Enter the first number: ";
    cin >> Num1;

    cout << "Enter the second number: ";
    cin >> Num2;

    cout << endl;

    if (Num1 < Num2)
    {
        Minor = Num1;
        Mayor = Num2;
    }
    else
    {
        Minor = Num2;
        Mayor = Num1;
    }

    if (Minor == 0)
    {
        cout << "ERROR: You can't divide by 0.";
    }
    else if (Mayor % Minor == 0)
    {
        cout << "Yes, " << Mayor << " is divisible by " << Minor;
    }
    else
    {
        cout << "NO, " << Mayor << " is not divisible by " << Minor;
    }

    return 0;
}