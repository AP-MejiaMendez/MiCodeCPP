/*
    Escribe un programa que pida la edad de una persona e indique si es mayor o menor de edad (18 años o más es mayor de edad).
*/
#include <iostream>
using namespace std;

int main()
{
    int age = -1;
    cout << "Welcome! \n------------\n";
    while (age < 0 || age > 150)
    {
        cout << "Please, enter your age (0-150): ";
        cin >> age;

        if (age < 0 || age > 150)
        {
            cout << "The data you have entered is invalid. Try again." << endl;
        }
    }
    if (age >= 18)
    {
        cout << "You are an adult!" << endl;
    }
    else
    {
        cout << "You are not an adult yet!" << endl;
    }

    return 0;
}
