#include <iostream>
using namespace std;
int compara_abc(char str1[],char str2[]){
	int retorno;
	if(str1[0]>str2[0]){
		retorno=1;
		
	}else if(str1[0]<str2[0]){
		retorno=-1;
		
	}else {
		retorno=0;
		
	}
	return retorno;
}
int compara_tam_cadena(char str1[],char str2[],int tam1,int tam2){
	int retorno;
	while(str1[tam1]!='\0'){
		tam1++;
	}
	while(str2[tam2]!='\0'){
		tam2++;
	}
	cout<<"--"<<tam1<<"--"<<tam2<<"--";
	if(tam1==tam2){
		retorno=0;
	}else if(tam1>tam2){
		retorno=1;
	}else{
		retorno=-1;
	}
	return retorno;
}

int main(){
	char str1[100],str2[100];
	int tam1=0,tam2=0,retorno1,retorno2;
	cout<<"Ingrese la primera cadena de caracteres: ";
	cin.getline(str1,100,'\n');
	cout<<"Ingrese la segunda cadena de caracteres: ";
	cin.getline(str2,100,'\n');
	
	retorno1=compara_tam_cadena(str1,str2,tam1,tam2);
	retorno2=compara_abc(str1,str2);
	cout<<endl<<"POR COMPARACION ALFABETICA..."<<endl;
	if(retorno1==0){
		cout<<str1<<" es igual a "<<str2;
	}else if(retorno1==1){
		cout<<str1<<" es mayor "<<str2;
	}else{
		cout<<str1<<" es menor a "<<str2;
	}
	
	cout<<endl<<"comparando tamanio de cadena....";
	cout<<endl<<endl;
	system("PAUSE");
	cout<<endl<<endl<<"POR COMPARACION DE TAMANIO DE CADENA..."<<endl;
	
	if(retorno2==0){
		cout<<str1<<" es igual a "<<str2;
	}else if(retorno2==1){
		cout<<str1<<" es mayor "<<str2;
	}else{
		cout<<str1<<" es menor a "<<str2;
	}
	return 0;
}
