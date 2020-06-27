#include <iostream>
using namespace std;
/*Este programa calcula el promedio de 25 estaturas y 
despliega un mensaje que dice cuantas estaturas estan arriba y cuantas estan abajo
del promedio. */
float CalcuProm(float estatura [])
{
  float sumnot=0.0,prom;
  for(int i = 0; i < 25; i++)
  {
    sumnot = sumnot+estatura[i]; /* Se suman las estaturas y se dividen entre 25 para poder obtener el promedio */
  }
  prom = sumnot/25;
  cout<<"El promedio es: "<<prom<<endl;
  return prom;
}


int UpAndDown(float estatura [], float prom)
{
    int menor=0, mayor=0,igual=0;
    for(int i = 0 ; i < 25; i++)
    {
        if(estatura[i]<prom)
        {
          menor++;
        }
        if(estatura[i]>prom)
        {
          mayor++;
        }
        if(estatura[i]==prom)
        {
          igual++;
        }
    }
    cout<<"Estaturas menores al promedio: "<<menor<<endl; /* En este apartado se despliega si una estatura es mayor o menor al promedio */
    cout<<"Estaturas mayores al promedio: "<<mayor<<endl;
    return 0;
}


int main(){
  float estatura[25];
  float prom;
      
  for(int i=0;i<25;i++)
  {
    cout<<"Ingrese estatura "<<i+1<<endl; /* Se pide ingresar las 25 estaturas. */
    cin>>estatura[i];
  }

  prom=CalcuProm(estatura);
  UpAndDown(estatura,prom);
  
  return 0;
}