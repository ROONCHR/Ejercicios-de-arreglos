#include <iostream>
#include <string.h>
//Invertir un vector e imprimirlo
using namespace std;
void invierte(char vector[],int largo){
	char aux;
	int tam=largo,i;
	for(i=0;i<tam;i++){
		aux=vector[i];
		vector[i]=vector[tam-1];
		vector[tam-1]=aux;
		tam=tam-1;
	}
	cout<<"La cadena invertida seria asi: "<<vector<<endl;
}


int main(){
	char vector[100];
	int largo;
	cout<<"----PROGRAMA QUE INVIERTE UN VECTOR----"<<endl;
	cout<<"Ingrese solo una cadena de caracteres(letras o numeros): ";
	cin.getline(vector,100,'\n');
	largo=strlen(vector);
	
	invierte(vector,largo);
	
	return 0;
}
