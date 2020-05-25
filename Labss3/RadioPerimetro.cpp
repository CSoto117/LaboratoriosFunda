//Calcula el area y el perimetro de un circulo//
#include <stdio.h>
#include <stdlib.h> //stdlib.h (std-lib: standard library o biblioteca estándar)//
#include <conio.h> //conio.h (console input/output, consola de entrada/salida)//
#include "iostream"
using namespace std;

int main(void)

{
          int RADIO ;
          const float F=3.1416; 
        float AREA,PERIMETRO;
          printf("Ingrese el Radio de un Circulo:");
          scanf("%d", &RADIO);
          
		  AREA = (RADIO*RADIO)*F;
         
          PERIMETRO =(2*F*RADIO);
		
cout<<"EL AREA DEL CIRCULO ES: " <<endl <<(RADIO*RADIO)*F<<endl;
  cout <<"EL PERIMETRO DEL CIRCULO ES:" <<endl <<PERIMETRO<<endl;

         return 0; 

getche();

}