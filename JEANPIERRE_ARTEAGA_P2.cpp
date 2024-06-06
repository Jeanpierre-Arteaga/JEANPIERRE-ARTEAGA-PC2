/*Desarrollar un programa en C++ que gestione los datos de empleados,
diferenciando entre empleados contratados y nombrados. El programa debe
solicitar al usuario el nombre, tipo de empleado (C-contratado o N-nombrado) y
sueldo básico de cada empleado, calcular sus deducciones de AFP (8%) y seguro
(5%) del sueldo, aplicar una bonificación según el tipo de empleado (C=8% O
N= 12% al sueldo básico), y determinar el sueldo neto. Finalmente, debe mostrar
los detalles de cada empleado y proporcionar un resumen consolidado de la
cantidad de empleados y el total acumulado de sueldos netos para ambos tipos
de empleados.*/
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
struct empleados{
	char nombre[30];
	char tipo[30];
	float sueldo;
}empleados[100];
int main(){
	int n,comparacion;
	float AFP[100],SEGURO[100],BONIFICACION[100],SUELDO_NETO[100],a=0,b=0;
	do{
		cout<<"Ingrese la cantidad de empleados: "; cin>>n;
	}while(n<0);
	for(int i=0;i<n;i++){
		fflush(stdin); //Para limpiar el bufer y no se bugee el cin.getline
		cout<<"\nIngrese el nombre del empleado "<<i+1<<": ";
		cin.getline(empleados[i].nombre,30);
		cout<<"SELECCIONE EL TIPO DE EMPLEADO: "<<endl;
		cout<<"Contratado (C). "<<endl;
		cout<<"Nombrado (N). "<<endl;
		cout<<"Ingrese el tipo (C o N) del empleado "<<i+1<<": "; cin>>empleados[i].tipo;
		do{
			cout<<"Ingrese el sueldo basico del empleado "<<i+1<<": "; cin>>empleados[i].sueldo;
		}while(empleados[i].sueldo<0);
		AFP[i]=0.08*empleados[i].sueldo;
		SEGURO[i]=0.05*empleados[i].sueldo;
		comparacion=strcmp(empleados[i].tipo,"C");
		if(comparacion==0){
			BONIFICACION[i]=0.08*empleados[i].sueldo;
		}
		else{
			BONIFICACION[i]=0.12*empleados[i].sueldo;
		}
		SUELDO_NETO[i]=empleados[i].sueldo+BONIFICACION[i]-(AFP[i]+SEGURO[i]);
		comparacion=strcmp(empleados[i].tipo,"C");
		if(comparacion==0){
			a+=SUELDO_NETO[i];
		}
		else{
			b+=SUELDO_NETO[i];
		}
	}
	//Imprimiendo
	cout<<"\nRESUMEN CONSOLIDADO: "<<endl;
	cout<<"La cantidad de empleados es: "<<n<<endl;
	cout<<"N"<<setw(20)<<"NOMBRE"<<setw(20)<<"TIPO"<<setw(20)<<"SUELDO BASICO"<<setw(20)<<"BONIFICACION"<<setw(20)<<"AFP"<<setw(20)<<"SEGURO"<<setw(20)<<"SUELDO NETO"<<endl;
	for(int i=0;i<n;i++){
		cout<<i+1<<setw(20)<<empleados[i].nombre<<setw(20)<<empleados[i].tipo<<setw(20)<<empleados[i].sueldo<<setw(20)<<BONIFICACION[i]<<setw(20)<<AFP[i]<<setw(20)<<SEGURO[i]<<setw(20)<<SUELDO_NETO[i]<<endl;
	}
	cout<<"El total de sueldos netos acumulados para empleados CONTRATADOS es: "<<a<<endl;
	cout<<"El total de sueldos netos acumulados para empleados NOMBRADOS es: "<<b<<endl;
	return 0;
}
