#include "iostream"

using namespace std;

int main ()

{
int num1, num2, MCD, residuo;
cout << "Calcularemos el Maximo Comun Divisor de dos numeros." << endl;
cout << "Ingrese el primer numero: ";
cin >> num1;
cout << "Ingrese el segundo numero: ";
cin >> num2;

do{
    residuo = num1 % num2;
    
    if (residuo != 0)
    {
    num1 = num2;
    num2 = residuo;
    }
    else
    {
    MCD = num2;
    } 

}while (residuo != 0);
cout<< MCD;

 
    return 0;
}