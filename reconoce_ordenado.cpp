#include <iostream>
#include <stdbool.h>
using namespace std;

bool retorna(int numeros[], int tamanio){
	int contador=0;
	for(int i=0;i<tamanio;i++){
		for(int j=i+1;j<tamanio;j++){
			if(numeros[i]>numeros[j]){
				contador++;	
			}
		}
	}
	if(contador==0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int numeros[100], tamanio;
	bool respuesta;
	cout<<"----SE RECONOCE SI ESTA ORDENADO(de forma ascendente)---"<<endl;
	cout<<"cuantos numeros desea ingresar? : ";
	cin>>tamanio;
	cout<<"Ingrese los numeros de uno en uno: "<<endl;
	for(int i=0;i<tamanio;i++){
		cin>>numeros[i];
	}
	respuesta=retorna(numeros,tamanio);
	
	if(respuesta==1){
		cout<<"el arreglo esta ordenado.";
	}else{
		cout<<"el arreglo no esta ordenado.";
	}
	
	return 0;
	
}
