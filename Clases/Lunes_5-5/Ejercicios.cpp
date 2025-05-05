/*
    Desarrollar un programa que solicite al usuario salario mensual bruto y realizar:
        1. Descuentos obligatorios:
            ISS: 3% del salario con tope máximo de 30$ SOLO aplica hasta 1000 dolares
            AFP: 7.25% del salario
            RENTA
                Salario neto despues de ISSS Y AFP      ISR a aplicar
                Hasta $472.00                           Exento
                De 472.01 a 895.24                      10%
                De 895.25 a 2,038.10                    20%
                Más de 2,038.10                         30%
    RESULTADO
    Ingrese su salario
    Que desea calcular
    MENU
*/

#include <iostream>
using namespace std;
int main()
{
    int Salary = 0, SalaryWDesc = 0, Option = 0;
    double ISSS, AFP, Renta;
    string Message;
    cout << "Welcome!\n----------\nTo the program who calculates Taxes\nPlease, enter your salary: ";
    cin >> Salary;
    cout << "\nNow, what do you want to calculate?\n";
    cout << "----------Menu----------";
    cout << "\n| 1. ISSS   |";
    cout << "\n| 2. AFP    |";
    cout << "\n| 3. Renta  |";
    cout << "\n| 4. Total  |";
    cout << "\n| 5. Salir  |";
    cout << "\n------------------------\n";
    cin >> Option;

    if (Salary <= 0)
    {
        cout << "Your salary can not be 0 or below";
    }
    else
    {
        switch (Option)
        {
        case 1:
            // Descuento del ISS 3% con tope máximo de 30$ Hasta $1000
            if (Salary > 1000)
            {
                ISSS = 30;
            }
            else
            {
                ISSS = (Salary * 0.03);
            }
            SalaryWDesc = Salary - ISSS;
            Message = "Salary: " + to_string(Salary) + "\nISSS: " + to_string(ISSS) + "\nDiscount: " + to_string(SalaryWDesc);
            break;
        case 2:
            // Descuento del AFP  7.25% del salario
            AFP = (Salary * 0.0725);
            SalaryWDesc = Salary - AFP;
            Message = "Salary: " + to_string(Salary) + "\nAFP: " + to_string(AFP) + "\nDiscount: " + to_string(SalaryWDesc);
            break;
        case 3:
            // Descuento de renta
            if (Salary > 1000)
            {
                ISSS = 30;
            }
            else
            {
                ISSS = (Salary * 0.03);
            }
            AFP = (Salary * 0.0725);
            SalaryWDesc = Salary - (AFP + ISSS);
            if (SalaryWDesc <= 472.00)
            {
                cout << "You dont pay rent, because you salary is below or equal to $472";
            }
            else
            {
                if (SalaryWDesc >= 472.01 || SalaryWDesc <= 895.24)
                {
                    Renta =(SalaryWDesc * 0.10);
                }
                else if (SalaryWDesc >= 895.25 || SalaryWDesc <= 2038.10)
                {
                    Renta =(SalaryWDesc * 0.20);
                }
                else
                {
                    Renta = (SalaryWDesc * 0.30);
                }
                SalaryWDesc = SalaryWDesc - Renta;
            }
            Message = "Salary: " + to_string(Salary) + "\nRenta: " + to_string(Renta) + "\nDiscount: " + to_string(SalaryWDesc);
            break;
        case 4:
            // Descuento de renta
            if (Salary > 1000)
            {
                ISSS = 30;
            }
            else
            {
                ISSS = (Salary * 0.03);
            }
            AFP = (Salary * 0.0725);
            SalaryWDesc = Salary - (AFP + ISSS);
            if (SalaryWDesc <= 472.00)
            {
                cout << "You dont pay rent, because you salary is below or equal to $472";
            }
            else
            {
                if (SalaryWDesc >= 472.01 || SalaryWDesc <= 895.24)
                {
                    Renta = (SalaryWDesc * 0.10);
                }
                else if (SalaryWDesc >= 895.25 || SalaryWDesc <= 2038.10)
                {
                    Renta = (SalaryWDesc * 0.20);
                }
                else
                {
                    Renta =(SalaryWDesc * 0.30);
                }
                SalaryWDesc = SalaryWDesc - Renta;
            }
            Message = "Salary: " + to_string(Salary) + "\nISSS: " + to_string(ISSS) + "\nAFP: " + to_string(AFP) + "\nRenta: " + to_string(Renta) +
                      "\n Discount: " + to_string(SalaryWDesc);
            break;
            case 5:
            return 0;
            break;
        default:
            cout << "That option do not exists";
            break;
        }
        cout << endl
             << "The results are: " << endl
             << Message << endl;
    }
    return 0;
}
