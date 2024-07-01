//Rotar las componentes de un vector una posición hacia la derecha.
#include <iostream>
#include <string.h>
using namespace std;
void rota(char cadena[],int largo){
	char aux;
	int tam=largo-1,i;
	aux=cadena[tam];
	for(i=0;i<largo;i++){
		cadena[tam]=cadena[tam-1];
		tam=tam-1;
	}
	
	cadena[0]=aux;
	cout<<endl<<"La cadena aplicada la rotacion seria: ";
	for(i=0;i<largo;i++){
		cout<<cadena[i];
	}
}

int main(){
	char cadena[100];
	int largo;
	cout<<"Ingrese solo una cadena de caracteres: ";
	cin.getline(cadena,100,'\n');
	largo=strlen(cadena);
	
	rota(cadena,largo);
	return 0;
}
