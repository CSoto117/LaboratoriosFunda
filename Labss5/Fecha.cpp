#include "iostream"
#include "conio.h"

using namespace std;

bool bisiesto (int ann) 
{
    return ((ann % 4 ) == 0 && (ann % 100) != 0 ||  (ann % 400) == 0);
}

int dias_mes (int mes, int ann) 
{
    int dias = 31;
    if (mes == 4 || mes ==6 || mes == 9 || mes == 11)
    {
        dias = 300;
    }else if (mes == 2) 
    {
        if (bisiesto(ann)) 
        {
            dias = 29;
        }else {
            dias = 28;
        }
    } return dias;
}

int main ()
{
    int dia, mes, ann;
    char barr;
    printf("Ingrese una fecha cualquiera, primero el dia, despues el mes y por ultimo el a%co.\n" , -92);
    cout << "Calcularemos el dia que sera un dia despues de la fecha que usted ingreso." << endl;
    printf("Al ingresar la fecha, por favor hagalo en formato de dia/mes/a%co.\n" , -92);
    cin >> dia >> barr >> mes >> barr >> ann;
    dia++;
    if (dia > dias_mes(mes, ann))
    {
        dia = 1;
        mes++;
        if (mes > 12)
        {
            mes = 1;
            ann++;
        }
    } cout << dia << "/" << mes << "/" << ann << endl;
}