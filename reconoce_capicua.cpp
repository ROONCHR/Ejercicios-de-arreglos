#include <iostream>
#include <string.h>

using namespace std;
void reconoce(char capicua[],int largo){
	
	int tam=largo-1,i=0,contador=0;
	if(largo<=10){
	
		while(i<largo/2){
		
			if(capicua[contador]==capicua[tam]){
				
				tam=tam-1;
				contador++;
			}
			i=i+1;	
		}
		
		if(contador==largo/2){
		
			cout<<endl<<"El numero SI es capicua";
		}else{
			cout<<endl<<"el numero NO es capicua";
		}
		
	}else{
		cout<<"Entrada incorrecta.(cantidad de digitos diferente de 10)";
	}
}


int main(){
	char capicua[100];
	int largo;
	cout<<"----PROGRAMA QUE RECONOCE UN NUMERO CAPICUA ----"<<endl;
	cout<<"Ingrese EL NUMERO a reconocer(max 10 digitos): ";
	cin.getline(capicua,100,'\n');
	largo=strlen(capicua);
	
	reconoce(capicua,largo);
	
	return 0;
}
