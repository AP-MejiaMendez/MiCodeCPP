#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int size = 100;
    char pC[size] = {};

    cout << "Ingrese una palabra: ";
    cin.getline(pC, size);
    size = strlen(pC);
    char cP[size];

    bool isP = false;

    for (int i = size - 1, e = 0; i >= 0; i--, e++)
    {
        cP[e] = pC[i];
        // Pedro
        // or

        if (cP[e] == pC[e])
        {
            cout << "Posicion " << e << ") " << cP[e] << " Es igual a la posision " << i << ") " << pC[e] << endl;
            isP = true;
        }
        else
        {
            cout << "Posicion " << e << ") " << cP[e] << " No es igual a la posicion " << i << ") " << pC[e] << endl;
            isP = false;
        }
    }

    if (isP)
    {
        cout << endl
             << "Es palindromo" << endl;
    }
    else
    {
        cout << endl
             << "No es palindromo" << endl;
    }

    return 0;
}