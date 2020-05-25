#include "iostream"

using namespace std;

int main ()
{
  //Verifica si un número es par o impar//
    int x;
    
    cout<< "Verificaremos si un numero es par o impar."<< endl;
    
    cout<< "Ingrese el numero a verificar:";
    cin >> x;
    if (x%2==0)
    {
        cout << "el numero es par."<< endl;
    }
    else 
    {
  cout << "el numero es impar."<< endl;
    }
}