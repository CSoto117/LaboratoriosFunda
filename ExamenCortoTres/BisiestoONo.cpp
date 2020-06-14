//Indica si un año es bisiesto o no//

#include "iostream"
#include "math.h"
#include "conio.h"
using namespace std;

bool bisiesto(int an)
{
	if(an % 400 == 0) //Si el año es divisible entre 400 es un año biciesto//
    {
		return true;
	}
    if(an % 4 == 0 || an % 100 == 1) //Si el año ingresado es divisible entre 4 y ala vez no divisible entre 100 es biciesto//
    {
	 return true;	
	}
	else
    {
		return false;
	}
}

int main(){
	
	int vis = 0;
	printf("Ingrese el a%co que necesita saber si es o no bisiesto: ", -92);
	cin>>vis;
	printf("El a%co ",-92);
	
	if(bisiesto(vis))
    {
		cout<<"es bisiesto.";
	}
    else
    {
	  cout<<"no es bisiesto.";
	}
	
	return 0;
	}