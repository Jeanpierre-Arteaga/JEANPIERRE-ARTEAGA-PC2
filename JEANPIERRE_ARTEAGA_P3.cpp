/*Desarrollar un programa en C++ que permita ingresar y almacenar el código, el
nombre, nota 1, nota 2 y nota 3 de un curso. Mostrar el promedio de cada
estudiante y la cantidad de estudiantes desaprobados. Finalmente, ordene los datos
en base de los promedios. Muestre los datos ordenados.*/
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main(){
	int n,desaprobados=0;
	float PROMEDIOS[100],primer_aux,promedio=0,notas1=0,notas2=0,notas3=0;
	string nombres[30],segundo_aux;
	do{
		cout<<"Ingrese la cantidad de estudiantes: "; cin>>n;
	}while(n<0);
	for(int i=0;i<n;i++){
		promedio=0;notas1=0,notas2=0,notas3=0;
		cout<<"\nALUMNO "<<i+1<<": "<<endl;
		cout<<"Ingrese el nombre del alumno "<<i+1<<": "; cin>>nombres[i];
		do{
			cout<<"Ingrese la nota 1 del alumno "<<i+1<<": "; cin>>notas1;
		}while(notas1<0||notas1>20);
		do{
			cout<<"Ingrese la nota 2 del alumno "<<i+1<<": "; cin>>notas2;
		}while(notas2<0||notas2>20);
		do{
			cout<<"Ingrese la nota 3 del alumno "<<i+1<<": "; cin>>notas3;
		}while(notas3<0||notas3>20);
		promedio=notas1+notas2+notas3;
		PROMEDIOS[i]=promedio/3;
		if(PROMEDIOS[i]<11){
			desaprobados++;
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(PROMEDIOS[j]>PROMEDIOS[j+1]){
				primer_aux=PROMEDIOS[j];
				PROMEDIOS[j]=PROMEDIOS[j+1];
				PROMEDIOS[j+1]=primer_aux;
				segundo_aux=nombres[j];
				nombres[j]=nombres[j+1];
				nombres[j+1]=segundo_aux;
			}
		}
	}
	//ORDENANDO NOTAS DE MENOR A MAYOR
	cout<<endl;
	cout<<"DATOS ORDENADOS SEGUN EL PROMEDIO"<<endl;
	cout<<"NOMBRES"<<setw(20)<<"PROMEDIOS"<<endl;
	for(int i=0;i<n;i++){
		cout<<nombres[i]<<setw(20)<<PROMEDIOS[i]<<endl;
	}
	cout<<"La cantidad de alumno desaprobados es: "<<desaprobados;
	return 0;
}
