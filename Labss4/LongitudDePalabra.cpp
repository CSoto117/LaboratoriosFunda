#include "iostream"
#include "string.h"

using namespace std;

int main ()
{
    //Nos dice si una palabra tiene más o menos de 10 letras y si su longitud es par o impar//
    char palabra [20];
     int longi;
    cout << "Ingrese la palabra"<< endl;
    cin >> palabra;
   
    cout << "La palabra ingresada es " << palabra<< " y tiene " << strlen(palabra) << " letras";
     longi=strlen(palabra);
     
     if(longi<=10)
     {
         cout<< endl<< "Su longitud es menor o igual a 10 caracteres";
     }

else
{
    cout<< endl<<  "Su longitud es mayor a 10 caracteres";
}
if(longi%2==0)
{
    cout<<endl<< "Y si longitud es par";
}
else
{
    cout<< endl<< "Y su longitud es impar";
}

}