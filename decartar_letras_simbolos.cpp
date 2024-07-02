//Leer una línea de entrada. Descartar todos los símbolos excepto los dígitos. Convertir la cadena de
//dígitos en un entero y fijar el valor del entero a la variable n y finalmente sumarle 2 (las funciones
//atoi y isdigit te pueden ayudar para este propósito) Ejemplo: “En aproximadamente 120 días
//llegaremos al año 2022 y festejaremos” 1202022 -> 1202024

#include <iostream>
#include <stdlib.h>
using namespace std;
int tamanio(char cadena[]){
	int tamanio=0;
	for(int i=0;cadena[i]!= '\0';i++){
		tamanio++;
	}
	return tamanio;
}
void descartar(char cadena[],int tam){
	int x=0;
	for(int i=0;i<tam;i++){
		
		if(cadena[i]=='0'){
			cadena[x]=cadena[i];
			x++;
		}else if(cadena[i]=='1'){
			cadena[x]=cadena[i];
			x++;
		}else if(cadena[i]=='2'){
			cadena[x]=cadena[i];
			x++;
		}else if(cadena[i]=='3'){
			cadena[x]=cadena[i];
			x++;
		}else if(cadena[i]=='4'){
			cadena[x]=cadena[i];
			x++;
		}else if(cadena[i]=='5'){
			cadena[x]=cadena[i];
			x++;
		}else if(cadena[i]=='6'){
			cadena[x]=cadena[i];
			x++;
		}else if(cadena[i]=='7'){
			cadena[x]=cadena[i];
			x++;
		}else if(cadena[i]=='8'){
			cadena[x]=cadena[i];
			x++;
		}else if(cadena[i]=='9'){
			
		}
	}
}

int main(){
	char cadena[100];
	int tam,numero;
	cout<<"-----PROGRAMA QUE IDENTIFICA NUMEROS EN UNA CADENA Y CONVIERTE A ENTERO-----"<<endl<<endl;
	cout<<"Ingresa una cadena: ";
	cin.getline(cadena,100,'\n');
	
	tam=tamanio(cadena);
	descartar(cadena,tam);
	
	numero=atoi(cadena);
	
	cout<<endl<<"EL NUMERO EXTRAIDO DE LA CADENA ES: "<<numero;
	
	cout<<endl<<endl<<"Le sumamos 2 para verificar: "<<endl;
	system("PAUSE");
	cout<<endl;
	
	cout<<numero+2;
	
	return 0;
	
}
