#include <iostream>
#include <string.h>
using namespace std;

void Poner_eco(char cad[],int largo){
	
	for(int i=0;i<largo;i++){
		if(cad[i]==' '){
			cad[i]='\n';
		}
		
	}
	cout<<"La frase con eco en los espacios es:"<<endl<<cad<<endl;
	
}


 int main(){
 	char frase[100];
 	int largo;
 	
	cout<<"ingrese una frase con menos de (100) caracteres: ";
 	cin.getline(frase,100,'\n');
 	largo=strlen(frase);
 	Poner_eco(frase,largo);
 	return 0;
}
