//Calcula el salario de N ususarios, con descuentos.//
#include "iostream"
#include "cmath"
using namespace std;
float suma(float n3, float n4);
float trabajo(float n, float h);
float dedu1, dedu2, dedu3, resu1 ;
int main(){
	
	int n1;
	float hh, h3;
	
    cout<<"Ingrese el numero de usuarios: ";
    cin>>n1;
	for(int i=0; i<n1;i++){
	cout<<endl<<"Ingrese las horas trabajadas: ";
	cin>>hh;
	cout<<endl<<"Ingrese las horas extras trabajadas: ";
	cin>>h3;
	cout<<endl<<"Su salario actual es de: $ "<<suma(hh, h3)<<endl;
	cout<<endl<<"Su salario actual con los descuento es de: $ "<<trabajo(hh, h3);
	cout << endl << "Se le descontaran $" << dedu3;
   }	
	return 0;
}

float suma(float n3, float n4){
	
	float resulta;
	resulta= ((n3*1.75)+(n4*2.50));
	
	return resulta;
}

float trabajo(float h, float h1){
	
	float resu;
	//Al numero de horas ingresadas se le multiplican por 1.75 y a las horas extras por 2.50//
	//Eso se suma y nos da el salario, para calcular los descuentos//
	//El salario se multiplica por el 4% y el 6.25% y se le resta//
		
	resu1=(h*1.75)+(h1*2.50);
	dedu1= resu*0.04;
	dedu2= resu*0.0625;
	dedu3 = dedu1+dedu2;
	resu=(h*1.75)+(h1*2.50)-dedu3;
	if(resu<=500){
		resu==resu;
	}else{
		resu-0.010;
	}
	return resu;
}