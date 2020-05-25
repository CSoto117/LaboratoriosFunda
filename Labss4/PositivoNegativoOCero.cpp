#include "iostream"

using namespace std;

int main ()
{
//Verifica si el numero es positivo, negativo o igual a cero.//
    int X;
    cout << "Verificaremos si un numero es positivo, negativo o igual a cero."<< endl;
    cout<< "Digite el numero a verificar:";
    cin >> X;

    if(X==0)
    {
     cout << X <<  " El numero es igual a cero.";
    }
    
    if (X<0)
    {
        cout << X << " es un numero negativo.";
    }
    if (X>0)
     {
         
         cout<< X <<  " es un numero positivo.";
     }

}