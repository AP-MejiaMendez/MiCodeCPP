#include <iostream>
using namespace std;

int main()
{
    int Num = 0;
    bool By5 = false, By3 = false;

    cout << "Welcome to the program that tells you if a number is divisible by 5 and 3" << endl;

    cout << endl;
    cout << "Enter the number: ";
    cin >> Num;

    cout << endl;

    By5 = (Num % 5 == 0);
    By3 = (Num % 3 == 0);

    cout << endl;
    if (By5 && By3)
    {
        cout << "The number is divisible by both 5 and 3";
    }
    else if (By5)
    {
        cout << "The number is divisible by 5 but not by 3";
    }
    else if (By3)
    {
        cout << "The number is divisible by 3 but not by 5";
    }
    else
    {
        cout << "The number is NOT divisible by 5 or by 3";
    }

    return 0;
}
