#include <iostream>
using namespace std;

int main()
{
    int numeroSecreto = 42;
    int intento;
    cout<<"Ingrese un numero: ";
    cin>>intento;
    while(intento != numeroSecreto)
    {
        if(intento > numeroSecreto){
            cout<<"El numero es demasiado alto. Intentalo de nuevo: ";

        }else{
            cout<<"El numero es demasiado bajo. Intentalo denuevo: ";
        }
        cin>>intento;
    }
    cout<<endl<<"Felicidades, has adivinado el numero secreto"<<endl;
    return 0;
}
