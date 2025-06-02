/*
 */
#include <iostream>
using namespace std;

int mayorDeTres(int a, int b, int c)
{

    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

bool esPar(int n)
{

    return n % 2 == 0;
}

int main()
{
    int a = 3, b = 9, c = 5;
    int mayor3 = mayorDeTres(a, b, c);

    if (esPar(mayor3))
    {
        cout << mayor3 << " Es par" << endl;
    }
    else
    {
        cout << mayor3 << " Es impar" << endl;
    }
    return 0;
}