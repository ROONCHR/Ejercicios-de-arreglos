//Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de
//tendencia central media, mediana y moda
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void media(int numeros_aleatorios[]){
	int suma=0;
	for(int i=0;i<30;i++){
		suma=suma+numeros_aleatorios[i];
	}
	
	cout<<endl<<"la media es: "<<suma/30<<endl;
	
	
}

void mediana(int numeros_aleatorios[]){
	cout<<endl<<"la mediana es: "<<numeros_aleatorios[14]<<" y "<<numeros_aleatorios[15]<<endl;
}
void moda(int numeros_aleatorios[]){
	int contador=0,x=1,aux=1,moda_,i;
	
	for(i=0;i<30;i++){
		contador=0;
		for(int j=0;j<30;j++){
			
			if(numeros_aleatorios[i]==numeros_aleatorios[j]){
				contador=contador+1;
			}
			
		}
		if(contador>aux){
		aux=contador;
		moda_=numeros_aleatorios[i];
		}	
	
	}
	
	if(aux<=1){
		cout<<endl<<"la moda en este arreglo de numeros no existe."<<endl;
	}else{
		cout<<endl<<"la moda es: "<<moda_<<endl;
	}
	cout<<"-----con "<<aux<<" repeticiones-----";
}

int main() {
	
	int numeros_aleatorios[30],i,j,aux;
	
	srand(time(0));
	
	
	
	for(i = 0; i < 30 ; i++) {
		numeros_aleatorios[i]=(rand()%900)+100 ;
		
	}
	
	for(i=0;i<30;i++){
		for(j=i+1;j<30;j++){
			if(numeros_aleatorios[i]>numeros_aleatorios[j]){
				aux=numeros_aleatorios[i];
				numeros_aleatorios[i]=numeros_aleatorios[j];
				numeros_aleatorios[j]=aux;
			}
		}
	}
	cout<<"Los numeros generados y ordenados son: ";
	for(i=0;i<30;i++){
		cout<<numeros_aleatorios[i]<<" , ";
	}
	cout<<endl;
	system("PAUSE");
	cout<<endl;
	
	media(numeros_aleatorios);
		
	mediana(numeros_aleatorios);

	
	moda(numeros_aleatorios);
	
	
	
	return 0;
}
