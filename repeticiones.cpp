#include <iostream>
//Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones
using namespace std;
void ordena(int numeros[],int tamanio){
	int i,k=0;
	for(i=0;i<tamanio-1;i++){
		for(int j=i+1;j<tamanio;j++){
			if(numeros[i]>numeros[j]){
				int aux;
				aux=numeros[j];
				numeros[j]=numeros[i];
				numeros[i]=aux;
			}
		}
	}
	cout<<"los numeros son: ";
	for(i=0;i<tamanio-1;i++){
	cout<<numeros[i]<<" , ";
	k++;
	}
	cout<<numeros[k];
}
void mayor(int numeros[],int tamanio){
	int i=tamanio-2,cont=0;
	while(numeros[tamanio-1]==numeros[i]){
		i=i-1;
		cont=cont+1;
			
	}
	cout<<"El  numero mayor es: "<<numeros[tamanio-1]<<endl <<"la cantidad de numeros iguales al mayor es: "<<cont;
}
void menor(int numeros[], int tamanio){
	int i=1, cont=0;
	while(numeros[0]==numeros[i]){
		i++;
		cont++;
	}
	cout<<"El  numero menor es: "<<numeros[0]<<endl <<"la cantidad de numeros iguales al menor es: "<<cont;
}
int main(){
	int tamanio,numeros[100],i,k=0;
	cout<<"Cuantos numeros desea ingresar?(max 100): ";
	cin>>tamanio;
	cout<<"Ingrese los numeros"<<endl;
	for(i=0;i<tamanio;i++){
		cin>>numeros[i];
	}
	ordena(numeros,tamanio);
	
	cout<<endl;
	system("PAUSE");
	cout<<endl;
	
	mayor(numeros,tamanio);
	
	cout<<endl;
	system("PAUSE");
	cout<<endl;
	
	menor(numeros,tamanio);
	
	
	return 0;
	
	

}
