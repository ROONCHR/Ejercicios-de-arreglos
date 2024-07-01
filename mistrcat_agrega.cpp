#include <iostream>
using namespace std;

void mistrcpy(char str1[], char str3[], int tam1){
	
	for (int i = 0; i<tam1; i++) {
		str3[i] = str1[i];
	}
}

void mistrcat(char str2[], char str3[], int tam1,int tam2){
	int tam1s=tam1+2;
	str3[tam1]=' ';
	str3[tam1+1]=' ';
    for(int i=0; i<tam2; i++){
    	str3[tam1s+i]=str2[i];
	}

    cout << "DESPUES: "<<str3;
}

int main(){
	char str1[100],str2[100],str3[100];
	int tam1=0,tam2=0;
	cout<<"------PROGRAMA QUE AGREGA  STR2 A STR1------"<<endl;
	cout<<"Ingrese la cadena de caracteres que(contenido de STR1): ";
	cin.getline(str1,100,'\n');
	cout<<endl<<"Ingrese la cadena de caracteres que(contenido de STR2): ";
	cin.getline(str2,100,'\n');
	cout<<endl<<"MOSTRANDO STR1 ANTES DE AGREGARLE STR2"<<endl;
	cout<<"------>"<<str1<<endl<<endl;
	
	while(str1[tam1]!='\0'){
		tam1++;
	}
	while(str2[tam2]!='\0'){
		tam2++;
	}
	
	mistrcpy(str1,str3,tam1);
	mistrcat(str2,str3,tam1, tam2);
	
	
	
	return 0;
}
