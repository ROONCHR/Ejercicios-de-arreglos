#include <iostream>

using namespace std;


void suma(int numero[],int tamanio){
	
	int sp=0,sn=0,ep=0,en=0;
	
	for(int i=0;i<tamanio;i++){
		if(numero[i]>=0){
			sp+=numero[i];
			ep++;
		}else{
			sn+=numero[i];
			en++;
		}
	}
	cout<<"Hay "<<ep<<" elementos positivos y la suma de los numeros positivos es: "<<sp<<endl;
	cout<<"Hay "<<en<<" elementos negativos y la suma de los numeros negativos es: "<<sn<<endl;
}

int main(){
	int tamanio,numero[100],i;
	cout<<"Cuantos numeros desea ingresar?(max 100): ";
	cin>>tamanio;
	cout<<"Ingrese los numeros combine positivos y negativos"<<endl;
	for(i=0;i<tamanio;i++){
		cin>>numero[i];
	}

	suma(numero,tamanio);
	
	
	return 0;
	
	

}
