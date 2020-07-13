#include "iostream"
#include "string.h"
#include "cmath"

using namespace std;

const int longCad = 20;
struct CostoXArticulo
{
char NombreDelArticulo[longCad + 1];
int cantidad;
float precio;
float costoDeArticulo;
};

void VerProductos(CostoXArticulo ArticulosCantidad[100],int NdeArticulos);
void Factura(CostoXArticulo ArticulosCantidad[100],int NdeArticulos);
void CalcuDePago(CostoXArticulo ArticulosCantidad[100],int NdeArticulos);
float TotalPagar(CostoXArticulo ArticulosCantidad[100],int NdeArticulos);

int main(void)
{
    int NdeArticulos;
    float TotAPagar;
    CostoXArticulo ArticulosCantidad[100];
    cout << endl << "Bienvenido a la tienda de Don Challo." <<endl <<endl;
    cout << "Por favor ingrese la cantidad de diferentes tipos de articulos que desea facturar:"<<endl;
    cin >> NdeArticulos;
    while(NdeArticulos<1||NdeArticulos>100)/*Nos aseguramos que el usuario no agregue menos de un producto
    o mas de 100*/
    {
    cout<<"Debe ingresar un numero de productos mayor a 0 y menor a 100: "<<endl;
    cin>>NdeArticulos;
    }

    cout << endl;
    VerProductos(ArticulosCantidad,NdeArticulos);
    CalcuDePago(ArticulosCantidad,NdeArticulos);
    cout << "Lista de productos comprados: "<<endl <<endl;
    Factura(ArticulosCantidad,NdeArticulos);
    TotAPagar = TotalPagar(ArticulosCantidad, NdeArticulos);
    cout<<endl << "Total a pagar: $" <<TotAPagar <<" ";

}

void VerProductos(CostoXArticulo ArticulosCantidad[100],int NdeArticulos)
{
    int i;
    for(i = 0; i < NdeArticulos; i = i+1)
    {
        fflush(stdin);/*Se vacia el buffer*/
        cout << "Digite el nombre del producto:"<<endl;
        cin.getline(ArticulosCantidad[i].NombreDelArticulo,20,'\n');
        cout << "Digite la cantidad de productos que comprara:"<<endl;
        cin >> ArticulosCantidad[i].cantidad;
        while(ArticulosCantidad[i].cantidad<=0||ArticulosCantidad[i].cantidad>100)/*Establecemos un
        minimo de 1 procucto a comparar y un maximo de 100.*/
        {
        if(ArticulosCantidad[i].cantidad<=0)
        {
        cout<<"Ingrese una cantidad de productos mayor a 0 para comprar este articulo:"<<endl;
        cin>>ArticulosCantidad[i].cantidad;
        }else
        {
        cout<<"No es permitido comprar mas de 100 productos por articulos."<<endl;
        cout<<"Por favor ingrese una cantidad de productos menor a 100:"<<endl;
        cin>>ArticulosCantidad[i].cantidad;
        }
        }

        cout<<"Digite el precio del articulo por unidad:"<<endl;
        cin>>ArticulosCantidad[i].precio;
        while(ArticulosCantidad[i].precio<=0 || ArticulosCantidad[i].precio>1000)/*Se pone evita que los articulos
        no valgan nada y se establece un costo maximo de $1000*/
        
        {
        cout<<"Los precios establecidos no sobrepasan los $1000.00 y deben ser mayores a $0.00:"<<endl;
        cin>>ArticulosCantidad[i].precio;
        }
        cout<<endl;
    }
}

void Factura(CostoXArticulo ArticulosCantidad[100],int NdeArticulos)
{
    int i;
    for(i = 0; i < NdeArticulos; i = i+1)
    {
        cout << "Nombre del producto: "<<ArticulosCantidad[i].NombreDelArticulo <<" " <<endl;
        cout << "Cantidad de productos comprados: "<<ArticulosCantidad[i].cantidad <<" " <<endl;
        cout << "Precio del producto por unidad: $"<<ArticulosCantidad[i].precio <<" " <<endl;
        cout << "Compra total de articulo: $"<<ArticulosCantidad[i].costoDeArticulo <<" " <<endl;
        cout << endl;
    }
}

void CalcuDePago(CostoXArticulo ArticulosCantidad[100],int NdeArticulos)
{
    int i;
    for(i = 0; i < NdeArticulos; i = i+1)
    {
        int articulos=0;
        float precioUnitario=0;
        articulos=ArticulosCantidad[i].cantidad;
        precioUnitario=ArticulosCantidad[i].precio;
        ArticulosCantidad[i].costoDeArticulo=(articulos*precioUnitario);/*Se realiza la multiplicación 
        de la cantidad de articulos por el costo unitario del articulo*/
    }
}

float TotalPagar(CostoXArticulo ArticulosCantidad[100],int NdeArticulos)
{
    int i;
    float TotAPagar=0;
    for(i = 0; i < NdeArticulos; i = i+1)
    {
        TotAPagar=TotAPagar+ArticulosCantidad[i].costoDeArticulo;
    }
    return TotAPagar;/*Retorna el costo total de la compra*/
}