#include <iostream>
using namespace std;

int main()
{
    int contador;
    cout<<"Igrese un numero: ";
    cin >> contador;
    while (contador <= 5)
    {
        cout << "Contador en while: " << contador << endl;
        contador++;
    }
    return 0;
}