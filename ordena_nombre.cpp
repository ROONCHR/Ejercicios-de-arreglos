#include <iostream>


using namespace std;

int nombresmax = 100; 

int main() {
    string nombres[nombresmax];
    int cant_Nombres = 0;

   
    cout << "Introduce nombres escribe (fin) para terminar: "<<endl;
    while (cant_Nombres <nombresmax) {
        cout << "Nombre " << cant_Nombres + 1 << ": ";
        getline(cin, nombres[cant_Nombres]);
        
       
        if (nombres[cant_Nombres] == "fin") {
            break;
        }
        
        cant_Nombres++;
    }

  
    for (int i = 0; i < cant_Nombres - 1; ++i) {
        for (int j = 0; j < cant_Nombres - 1 - i; ++j) {
           
            if (nombres[j] > nombres[j + 1]) {
                string temp = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = temp;
            }
        }
    }

  
    cout << "los nombres ordenados alfabeticamente son: "<<endl;
    for (int i = 0; i < cant_Nombres; ++i) {
        cout << nombres[i] << endl;
    }

    return 0;
}
