#include <iostream>

using namespace std;


void suma_pares_impares(int numeros[],int tamanio){
	int i,op,suma_pares=0,suma_impares=0;
	for(i=0;i<tamanio;i++){
		op= numeros[i]%2;
		if(op==0){
			suma_pares=suma_pares+numeros[i];
		}else{
			
			suma_impares=suma_impares+numeros[i];
		}
	}
	cout<<"La suma de los numeros pares es: "<<suma_pares<<endl;
	cout<<"La suma de los numeros impares es: "<<suma_impares<<endl;
}

int main(){
	int tamanio,numeros[100],i;
	cout<<"Cuantos numeros desea ingresar?(max 100): ";
	cin>>tamanio;
	cout<<"Ingrese los numeros"<<endl;
	for(i=0;i<tamanio;i++){
		cin>>numeros[i];
	}

	suma_pares_impares(numeros,tamanio);
	
	
	return 0;
	
	

}
