// Resuelve la formula general//
#include "iostream"
#include "cmath"
#include "stdio.h"
using namespace std;
int main (void)

{
    int a, b, c;
    int suma, division, raiz;
    float resta,x1, x2;

    cout << "introduzca el valor de a: ";
    cin >> a;

    cout << "introduzca el valor de b: ";
    cin >> b;

    cout << "introduzca el valor de c: ";
    cin >> c;

    resta = (b*b)-(4*a*c);
    if (resta > 0) {
        x1 = (-b-sqrt(resta))/(2*a);
        
        printf("x1 = %.2f\n",x1);
       
     x2 = (-b+sqrt(resta))/(2*a);
      printf("x2 = %.2f\n",x2);
    }
 else
        printf("No tiene solucion.");

}