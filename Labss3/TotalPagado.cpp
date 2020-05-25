// Calcula el total a pagar//
#include "iostream"
#include "stdio.h"
#include <conio.h>
using namespace std;

int main (void)

{
    int cantidad;
    char producto[15];
    float precio;

    std::cout << "Que comprara?: ";
    std::cin >> producto;
    std::cout << "Cuantos comprara?: ";
    std::cin >> cantidad;
    std::cout << "Precio del producto por unidad: ";
    std::cin >> precio;

    std::cout << "En total usted pagara $" << cantidad*precio;


 getche();

}
