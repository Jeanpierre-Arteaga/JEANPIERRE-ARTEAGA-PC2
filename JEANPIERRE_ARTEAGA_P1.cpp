/*Hacer un programa que alimente solo con números entre 1 y 10 dos matrices una
de 2 x 3 y la otra de 3 x 2, buscar aquellos números de la primera matriz que sean
mayores a 5 y convertirlos a 1, y buscar aquellos números que sean menores a 6
de la segunda matriz y convertirlos a 0. (imprimir la primera matriz y la
modificada)*/
#include<iostream>
using namespace std;
int main(){
	int A[2][3],B[3][2];
	cout<<"PRIMERA MATRIZ: "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			do{
				cout<<"Digite un elemento de la primera matriz (entre 1 y 10): "; cin>>A[i][j];
			}while(A[i][j]<1||A[i][j]>10); //Para que solo sean numeros entre 1 y 10
		}
	}
	cout<<"\nSEGUNDA MATRIZ: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			do{
				cout<<"Digite un elemento de la segunda matriz (entre 1 y 10): "; cin>>B[i][j];
			}while(B[i][j]<1||B[i][j]>10); //Para que solo sean numeros entre 1 y 10
		}
	}
	//IMPRIMIENDO LA PRIMERA MATRIZ INICIAL
	cout<<endl;
	cout<<"LA PRIMERA MATRIZ ES: ";
	cout<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	//IMPRIMIENDO LA SEGUNDA MATRIZ INICIAL
	cout<<endl;
	cout<<"LA SEGUNDA MATRIZ ES: ";
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	//CAMBIO DE LA PRIMERA MATRIZ
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(A[i][j]>5){
				A[i][j]=1;
			}
		}
	}
	//CAMBIO DE LA SEGUNDA MATRIZ
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			if(B[i][j]<6){
				B[i][j]=0;
			}
		}
	}
	//IMPRIMIENDO LA PRIMERA MATRIZ MODIFICADA
	cout<<endl;
	cout<<"LA PRIMERA MATRIZ MODIFICADA ES: "<<endl;
	cout<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	//IMPRIMIENDO LA SEGUNDA MATRIZ MODIFICADA
	cout<<endl;
	cout<<"LA SEGUNDA MATRIZ MODIFICADA ES: "<<endl;
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

