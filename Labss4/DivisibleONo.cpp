#include "iostream"

using namespace std;

int main ()
{ 
    //Verifica si dos números son divisibles entre ellos//
    int x, y;
cout<< "Verificaremos si un  numero es divisible entre otro o no." <<endl;

    cout << "Por favor ingrese el primer numero:";
    cin>> x;
    cout << "Ingrese el segundo numero:";
    cin>> y;

    if(x%y==0)
    {
cout<<"Los numeros son divisibles.";
    }
else
{
 cout<< "Los numeros no son divisibles.";
}

}