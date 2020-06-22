#include "iostream"

using namespace std;

int main()
{
   int num[10] = {1,2,2,7,4,7,6,4,1,2};
    int i, enco;
    char ksk = 'F';
    enco = 7;
    i = 0;
    while((ksk == 'F')&&(i < 10))
    {
    if (num[i] == enco)
    {
        ksk = 'V';
    }
    i++;
    }
    if (ksk == 'F')
    {
        cout << "El numero no existe en el arreglo.";
    }
    else if (ksk == 'V')
    {
        cout << "El numero se encuentra en la posicion " << i-1 << " y " << i+1 << " y se repite solo una vez." << endl << endl;
    }

    return 0;
}