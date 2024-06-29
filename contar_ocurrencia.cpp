#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char respuesta,frase[100];
	int contador=0,largo;
	cout<<"Ingrese una frase (max 100 caracteres): ";
	cin.getline(frase,100,'\n');
	largo=strlen(frase);
	
	cout<<endl;
	system("PAUSE");
	cout<<endl;
	
	cout<<endl<<"Ingrese la letra o caracter a contar la occurrencia en  la frase: ";
	cin>>respuesta;
	
	for(int i=0;i<largo;i++){
		
		if(respuesta==frase[i]){
			contador++;
		}
			
	}
	cout<<"La cantidad de veces que aparece el caracter  ("<<respuesta<<") en la frase  es: "<<contador;
	
	return 0;
}
