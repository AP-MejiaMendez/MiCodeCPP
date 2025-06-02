/*
    6) Verificación de Contraseña
    El usuario debe ingresar una contraseña. Si es incorrecta, 
    debe volver a intentarlo hasta que la ingrese correctamente.
*/

#include<iostream>
using namespace std;

int main()
{
    string passwordDefault = "Password123";
    string passwordEntered= "";
    cout<<"Bienvenido denuevo, ingrese su contrasegna: ";
    cin>>passwordEntered;
    cout<<endl;
    while (passwordEntered != passwordDefault)
    {
        cout<<"La contrasegna ingresada es  incorrecta. Intente denuevo: ";
        cin>>passwordEntered;
    }
    cout<<endl<<"La contrasegna es correcta, Ingresando..."<<endl;
    return 0;
}