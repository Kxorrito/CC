#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
/*
Ejercicio 2
int main(){
int num[5];
cout<<"introduzca 5 numeros"<<endl;
for(int x=0;x<5;x++){
cin>>num[x];
}
cout<<"el arreglo invertido queda asi:"<<endl;
for(int x=4;x>=0;x--){
cout<<num[x]<<endl;
}
}
*/

/*
Ejercicio 1
int main(){
    int n;
    int suma=0;
    cin>>n;
    int arreglo[n];
    for(int i=0; i<n; i++){
        cin>>arreglo[i];
        suma+=arreglo[i];
}
    cout<<" "<<endl;
    for(int i=0; i<n; i++)
        cout<<arreglo[i];
    cout<<" "<<endl;
    cout<<suma;
    return 0;
}
*/

int main(){
int tamanio;
char cadena[10];
cout<<"Ingresar una cadena: ";
cin>>cadena;
tamanio=strlen(cadena);
cout<<"El tamaño de la cadena es: "<<tamanio<<endl;
}

