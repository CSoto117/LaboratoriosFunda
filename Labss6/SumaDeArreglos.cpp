#include "iostream"
#include "conio.h"

using namespace std;

int ver_arregloA(int arreglo1[], int n)
{
for (int i = 0; i < n; i++)
{
    cout << "ingres el numero en la posicion " << i << " del arreglo 1: ";
    cin >> arreglo1[i]; 

}return arreglo1[n];
}

int ver_arregloB(int arreglo2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero en la posicion " << i << " del arreglo 2: ";
        cin >> arreglo2[i];
    
    }return arreglo2[n];
}

int sumar_arreglos12(int arreglo1[], int arreglo2[], int n, int sumadearr[])
{
    for (int i = 0; i < n; i++)
    {
        sumadearr[i] = arreglo1[i] + arreglo2[i]; 
    }return sumadearr[n];
}

int mostrar_arreglo(int sumadearr[], int n)
{
     cout << "La suma de los arreglos es de: ";
    for (int i= 0; i < n; i++){
        cout << sumadearr[i] << "\t";
    }
}

int main ()
{
    int n;
    printf("Por favor ingrese el tama%co de los arreglos: ", -92);
    cin >> n;
    
    int arreglo1[n];
    int arreglo2[n];
    int sumadearr[n];

    ver_arregloA(arreglo1, n);
    cout << endl;
    ver_arregloB(arreglo2, n);
    sumar_arreglos12(arreglo1,arreglo2,n,sumadearr);
    mostrar_arreglo(sumadearr, n);
}