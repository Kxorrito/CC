#include <iostream>
using namespace std;

int suma(const int lista[],int tam){
	int r = 0;
	for(int i=0;i<tam;i++){
		r+=lista[i];
	}
	return r;
}


int suma_recu(const int lista[],int tam){
	if((tam-1)==0){
		return lista[0];
	}
	else
		return lista[tam-1] + suma(lista,--tam);
}

void reverza(int lista[],int tam){
	int indi=tam-1,ulti;
	for(int i=0;i<(tam/2);i++){
		ulti=lista[i];
		lista[i]=lista[indi];
		lista[indi]=ulti;
		indi-=1;
	}
}

int lend(char *lista){
	int len=0;
	for(int i=0;lista[i]!='\0';i++){
		++len;
	}
	return len;
}

void copiar(char *lista1,char *lista2){
	for(int i=0;lista1[i]!='\0';i++){
		lista2[i]=lista1[i];
	}
}

void concatenar(char *lista1,char *lista2){
	int cont=0;
	while(lista1[cont]!='\0')
		cont++;
	for(int i=0;lista2[i]!='\0';i++){
		lista1[cont]=lista2[i];
		cont++;
	}
}

int main() {
	int matriz[]={1,2,3,4,5},tam=5;
	cout<<suma_recu(matriz,5)<<endl;
	
	int matriz2[]={1,2,3,4,5},tam1=5;
	reverza(matriz2,tam1);
	for(int j=0;j<tam1;j++){
		cout<<matriz2[j];
	}
	cout<<'\n';
	
	char palabra[]="holalalgd";
	cout<< lend(palabra)<<endl;
	
	char hi[]="idfsnsfr";
	copiar(palabra,hi);
	cout<<palabra;
	return 0;
}
