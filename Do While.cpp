#include<iostream>
using namespace std;
main(){
	
	char respuesta;
	do{
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>respuesta;
	}while(respuesta=='s' || respuesta=='S');
	
	system("pause");
}
