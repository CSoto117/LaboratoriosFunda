#include "iostream"

using namespace std;

float Leer_nota(float notexam[][5], int num)
{
	 // Esta función pide las 5 notas  de cada estudiante//
	for (int i = 0; i < num; i++)
	{
		cout << "Para el Estudiante " << i << endl;
		for (int n = 0; n <= 4; n++)
		{
			cout << "Ingrese la nota " << n << ": ";
			cin >> notexam[i][n];
		}
	}return notexam[num][5];
}

float Calcular_nota(float notexam[][5], int num, float Nfinal[][5])
{ //Esta función calcula el porcentaje de la nota dado el puntaje, cada nota equivale a un 20% del 100%//
	for (int i = 0; i < num; i++)
	{
		for (int n = 0; n <= 4; n++)
		{
			Nfinal [i][n] = notexam[i][n] * 0.2;
		}
	}return Nfinal[num][5];
}

float Guardar_nota(float notexam[][5], int num, float Nfinal[][5], float Nsuma[][1])
{ //Esta funcion realiza la suma de los 5 puntajes//

	for (int i = 0; i < num; i++)
	{
		for (int n = 0; n <= 0; n++)
		{
			Nsuma[i][1] = Nfinal[i][n] + Nfinal[i][n+1] + Nfinal[i][n+2] + Nfinal[i][n+3] +Nfinal[i][n+4];
			cout << "La nota del estudiante " << i << " es de: ";
			if(Nsuma[i][1] >= 6.00)
			{
				cout << Nsuma[i][1] << endl; 
				//Se muestra la sumatoria//
				cout << "El estudiante aprobo." << endl;
			}
			else
			{
				cout << Nsuma[i][1] << endl;
				cout << "El estudiante reprobo." << endl;
			}
		}
	}return Nsuma[num][1];
}

int main(void)
{
	int num;

	cout << "Ingrese el numero de estudiantes a los que calculara su nota: ";
	cin >> num;

	float notexam[num][5]; 
	//Este arreglo contiene las notas//
	float Nfinal[num][5]; 
	//Arreglo que contiene el puntaje de cada nota//
	float Nsuma[num][1];
	//Y este arreglo contiene la nota final//

	Leer_nota(notexam,num);
	Calcular_nota(notexam,num,Nfinal);
	Guardar_nota(notexam,num,Nfinal,Nsuma);
}