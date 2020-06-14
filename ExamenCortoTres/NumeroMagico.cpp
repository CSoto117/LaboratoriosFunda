// Es un juego que te da 5 intentos para encontrar un numero entre 1 y 100//
#include "iostream"

using namespace std;

int main ()
{
    int intento = 5, prueba, nummag = 7;

    cout << "ADIVINA EL NUMERO MAGICO" << endl;
    cout << "cuando ya no quieras jugar ingresa el numero 0" << endl;
    do
    {
        cout << "Ingresa un numero, te dare una pista: esta entre el 1 y el 100" << endl;
        cin >> prueba;
        if (prueba == 0) // Se le da como opción al usuario de salirse del juego presionando 0//
        {
            break;
        }
        if (prueba > nummag) // Si el número ingresado es mayor a 7 entonces le mostrara un mensaje diciendo que ingrese un numero menor//
        {
            cout << "El numero debe ser menor, vuelve a intentar." << endl;
            intento--; // Solo son 5 intentos, cada vez que falle se ira restando uno//
            cout << "te quedan " << intento << " intentos." << endl;
        }
        if (prueba < nummag) // Si el número ingresado es menor a 7 entonces le mostrara un mensaje diciendo que ingrese un numero mayor//
        {
            cout << "El numero debe ser mayor, intenta de nuevo." << endl;
            intento--;
            cout << "te quedan " << intento << " intentos." << endl;
        }
        if (prueba == nummag) // Si adivina el numero le mostrara un mensaje diciendo que lo logro//
        {
            cout << "Wow, felicidades, ADIVINASTE! Bien hecho.";
        }

    }while(intento >0  && prueba != nummag);
    system("pause");
    return 0;
}