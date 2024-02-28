#include<iostream>
using namespace std;
main(){
	int tabla=0, res=0, inicio=0, fin=0;
	cout<<"Ingrese la tabla inicial: ";
	cin>>inicio;
	cout<<"Ingrese la tabla final: ";
	cin>>fin;
	
	for(int rango=inicio; rango<=fin; rango++){
		cout<<"\n"<<"Tabla del "<<rango<<"\n"<<endl;
	for(int i=1; i<=10; i++){
		res=rango*i;
		cout<<rango<<" X "<<i<<" = "<<res<<endl;
	}
		}
		
		system("pause");
}

