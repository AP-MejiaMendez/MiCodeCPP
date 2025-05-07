#include <iostream>
using namespace std;

/*
 */
int main()
{
    //Declaraci´pn de variables
    char Letter;
    int Grade;
    //Mensaje de contexo
    cout << "¡Welcome to the program of AMERICAN Convertions of grades!" << endl << "Enter your score: ";
    //Se guarda la variable
    cin >> Grade;

    //Evaluación de datos aceptados de Grade
    if (Grade < 0 || Grade > 100)
    {
        cout << "The grade can not be below 0 or not than 100" << endl;
    }
    else
    {
        //Evaluación de cada rango posible de Grade
        if (Grade >= 90)
        {
            Letter = 'A';
        }
        else if (Grade < 90 && Grade >= 85)
        {
            Letter = 'B';
        }
        else if (Grade < 85 && Grade >= 80)
        {
            Letter = 'C';
        }
        else if (Grade < 80 && Grade >= 70)
        {
            Letter = 'D';
        }
        else if (Grade < 70 && Grade >= 69)
        {
            Letter = 'E';
        }
        else if (Grade < 69)
        {
            Letter = 'F';
        }
        else {
            cout << "Your data is incorrect";

        }

        //Evaluación de los casos más mensajes de respuesta
        switch (Letter)
        {

        case 'A':
            cout << "Your socre is A";
            break;
        case 'B':
            cout << "Your socre is B";
            break;
        case 'C':
            cout << "Your socre is C";
            break;
        case 'D':
            cout << "Your socre is D";
            break;
        case 'E':
            cout << "Your socre is E";
            break;
        case 'F':
            cout << "Your socre is F";
            break;

        default:
        cout << "A problem has ocurred";
            break;
        }
    }

    return 0;
}