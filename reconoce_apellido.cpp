#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char nombre[20],apellido[20];
	
	cout<<"Ingrese el nombre: ";
	cin.getline(nombre,20,'\n');
	cout<<"ingrese el apellido: ";
	cin.getline(apellido,20,'\n');
	
	

	
	char nombre2[20],apellido2[20];
	
	cout<<endl<<"Guardando..."<<endl;
	system("PAUSE");
	cout<<endl<<endl;
	
	cout<<"Ingrese nuevamente su nombre: ";
	cin.getline(nombre2,20,'\n');
	cout<<"ingrese el apellido: ";
	cin.getline(apellido2,20,'\n');
	
	int com_nom= strcmp(nombre,nombre2);
	int com_ape=strcmp(apellido,apellido2);
	
	if(com_nom==0){
		if(com_ape==0){
			cout<<endl<<"Apellido correcto."	;		
		}else{
			cout<<endl<<"Apellido incorrecto.";
		}
			
	}else{
		cout<<endl<<"Nombre no, almacenado.";
	}
	
	return 0;
}
