/*
    switch(9)
        Días en un Mes
        Pide el número de un mes y muestra cuántos días tiene.
*/
#include <iostream>
using namespace std;

int main()
{
    int mesDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes = 0;
    string mesName = "";

    cout << "Bienvenido al programa que le dice el numero de dias en un mes \nConsidere lo siguiente: " << endl;
    cout <<endl<< "1) Enero\n"
         << "2) Febrero\n"
         << "3) Marzo\n"
         << "4) Abril\n"
         << "5) Mayo\n"
         << "6) Junio\n"
         << "7) Julio\n"
         << "8) Agosto\n"
         << "9) Septiembre\n"
         << "10) Octubre\n"
         << "11) Noviemrbe\n"
         << "12) Diciembre\n"
         << endl;

    cout << "Mes solicitado (1-12): ";
    cin >> mes;

    switch (mes)
    {
    case 1:
        mesName = "Enero";
        break;
    case 2:
        mesName = "Febrero";
        break;
    case 3:
        mesName = "Marzo";
        break;
    case 4:
        mesName = "Abril";
        break;
    case 5:
        mesName = "Mayo";
        break;
    case 6:
        mesName = "Junio";
        break;
    case 7:
        mesName = "Julio";
        break;
    case 8:
        mesName = "Agosto";
        break;
    case 9:
        mesName = "Septiembre";
        break;
    case 10:
        mesName = "Octubre";
        break;
    case 11:
        mesName = "Noviembre";
        break;
    case 12:
        mesName = "Diciembre";
        break;
    default:
        cout << "Ese mes no existe";
        return 0;
        break;
    }
    cout << mesName << " Tiene: " << mesDays[mes - 1] << " Dias";

    return 0;
}