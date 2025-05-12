/*
    5. Dados los enteros a, b y c, indicar si los primeros dos son divisibles entre
    el tercero. Si esto no se cumple, indicar cuál de ellos no es divisible
    entre el tercero.
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    cout << "Ingrese 3 números y le diremos cuales si y cuales no, son divisibles por el tercero" << endl;

    cout << endl;

    cout << "Primer numero: ";
    cin >> a;
    cout << "Segundo numero: ";
    cin >> b;
    cout << "Tercer numero: ";
    cin >> c;

    bool AisDiviByC = false, BisDiviByC = false;

    AisDiviByC = (a % c == 0);
    BisDiviByC = (b % c == 0);

    if (AisDiviByC && BisDiviByC)
    {
        cout << a << " Y " << b << " Son divisibles entre " << c << endl;
    }
    else if (AisDiviByC)
    {
        cout << a << "Es el unico divisibles entre " << c << endl;
    }
    else if (BisDiviByC)
    {
        cout << b << "Es el unico divisibles entre " << c << endl;
    }
    else
    {
        cout << "Ni " << a << " y " << b << " Son divisibles entre " << c << endl;
    }

    return 0;
}