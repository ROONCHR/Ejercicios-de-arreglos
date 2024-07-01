#include <iostream>
using namespace std;

void mistrcpy(char str1[], char str2[], int tamanio){
	for (int i = 0; i<tamanio; i++) {
		str2[i] = str1[i];
	}
}

int main(){
	
	char str1[100],str2[100];
	
	cout<<"------PROGRAMA QUE COPIA UN DE STR1 A STR2------"<<endl;
	cout<<"Ingrese la cadena de caracteres que desee copiar: ";
	cin.getline(str1,100,'\n');
	cout<<"MOSTRANDO STR2 ANTES DE SER COPIADO"<<endl;
	cout<<"------>"<<str2<<endl<<endl;
	int tamanio = sizeof(str1) / sizeof(str1[0]);
	
	mistrcpy(str1, str2, tamanio);
	
	cout<<"LA CADENA SE ESTA COPIANDO....";
	cout<<endl<<endl;
	system("PAUSE");
	cout<<endl<<endl;
	cout<<"MOSTRANDO STR2 AHORA"<<endl;
	cout<<"------->"<<str2;
	
	
	return 0;
}
