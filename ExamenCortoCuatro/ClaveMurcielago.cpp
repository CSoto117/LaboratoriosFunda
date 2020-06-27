#include "iostream"
#include "string"
/* Este programa cambiara algunas letras de un texto que se le pide ingresar al usuario */
using namespace std;

string codificarcadena(string cad)
{
string codificar;
int recorrido = cad.length();
for (int i = 0; i < recorrido; i++)
{
	string letra;
	char leercadena = cad.at(i);
	letra = leercadena;
/* Se programa para modificar las letras a camnbiar en la cadena de texto que el usuario
ingresara. */
	switch (leercadena)
	{
		case 'm':
		  letra = "0";
		  break;
		case 'u':
		  letra = "1";
		  break;
		case 'r':
		  letra = "2";
		  break;
		case 'c':
		  letra = "3";
		  break;
		case 'i':
		  letra = "4";
		  break;
		case 'e':
		  letra = "5";
		  break;
		case 'l':
		  letra = "6";
		  break;
		case 'a':
		  letra = "7";
		   break;
		case 'g':
		  letra = "8";
		  break;
		case 'o':
		  letra = "9";
		  break;
		default:
		  break;
	}
	codificar = codificar.append(letra); /* Se añade el nuevo caracter a la cadena ya ingresada. */
}
 return codificar;
}


string codificarcadena(string);
int main()
{
	string cadedena;
	cout << "Ingrese el texto a convertir en clave:" << endl;
	getline(cin, cadedena);
	cout <<"El texto en clave es: " << codificarcadena(cadedena) << endl;
}