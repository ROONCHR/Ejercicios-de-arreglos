#include <iostream>
using namespace std;

void PonerMayuscula(char cad[]){
	int n=0;
	while (cad[n]!='\0'){
		n++;
	}
	cad[0]=toupper(cad[0]);
	for(int i=0; i<n;i++){
		if (cad[i]==' '){
			cad[i+1]=toupper(cad[i+1]);
		}
	}
}




int main(){
	char miarray[]= "caceres patrimonio de la humanidad";
	PonerMayuscula(miarray);
	cout<<miarray;
	return 0;
}
