#include "iostream"
#include "string.h"

using namespace std;

int main ()
{
    char texto [20];
    int largo;
    //Verifica si una palabra (escrita totalmente en minusculas) inicia y termina con la misma letra//
  
  
   cout << "Introduzca una palabra: ";
   cin >> texto;

 
  largo=strlen(texto);
  cout<< "la primer letra digitada es: "  << texto[0]<< endl;
    
 cout<< "la ultima letra digitada es: "  << texto[largo-1] << endl;

 if (texto[0]==texto[largo-1])
 {
    cout<< "La palabra inicia y termina con la misma letra.";
 }
 else
 {
     cout<< "No inicia y termina con la misma letra.";
 }
 
}