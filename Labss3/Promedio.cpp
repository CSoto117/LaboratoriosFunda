//Calcula el promedio de 3 numeros//
#include <stdio.h>
#include <stdlib.h> //stdlib.h (std-lib: standard library o biblioteca estándar)//
#include <conio.h> //conio.h (console input/output, consola de entrada/salida)//

int main()
{
          int N1, N2, N3, PROMEDIO;
          printf("Digite el primer numero: ");
          scanf("%d", &N1);
          printf("Digite el segundo numero: ");
          scanf("%d", &N2);
          printf("Digite el tercer numero: ");
          scanf("%d", &N3);
		  PROMEDIO =(N1 + N2 + N3)/3;
		  printf("El promedio es: %d",PROMEDIO);
getche();

}