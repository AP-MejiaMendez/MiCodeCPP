#include <iostream>
using namespace std;

int main()
{
    int contador;
    cout << "Igrese un numero: ";
    cin >> contador;
    do
    {
        cout << "Contador en do-while";
        contador++;
    } while (contador <= 5);
    {
        cout << "Salio del bucle: ";
        return 0;
    }
}