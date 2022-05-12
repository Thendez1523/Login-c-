#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main ()
{
    cout<<"Ingrese usuario:";
    string user= "";
    cin>> user;
    if (user =="Marcos")
    {
        cout<<endl<<"Usuario Correcto"<<endl;
    }
    else
    {
        cout<<endl<<"Usuario Incorrecto"<<endl;
    }
    cout<<endl;
     cout<<"Ingrese contrasena:";
    string password= "";
    cin>> password;
    if (password =="Cano")
    {
        cout<<endl<<"Contrasena Correcta"<<endl;
    }
    else
    {
        cout<<endl<<"Contrasena Incorrecta"<<endl;
    }

}
