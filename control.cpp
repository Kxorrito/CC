#include <iostream>
using namespace std;

bool esPerfecto(int x){
	int suma=0;
	
	for(int i=1;i<x;i++){
		if((x%i)==0){
			suma+=i;
		}
	}
	
	if(suma==x)
		return true;
	
	return false;
}

bool esPrimo(int x){
	int divisores=0;
	for(int i=1;i<=x;i++){
		if((x%i)==0)
			divisores+=1;
	}
	if(divisores!= 2)
		return false;
	return true;
}

int potencia(int base,int exponente){
	if(exponente==1)
		return base;
	return base * potencia(base,--exponente);
}

void cambio(int &x,int &y){
	int suma=x+y;
	y=suma - y;
	x=suma - x;
}

void cambioBit(int &x,int &y){
	int suma=(x | y);
	y=(suma & y);
	x=(suma & x);
}

int main() {
	//1.1
	int x=5;
	if(esPerfecto(x)==true)
		cout<<x<<" es un numero perfecto"<<endl;
	else
		cout<<x<<" no es un numero perfecto"<<endl;
	cout<<'\n';
	
	//1.2
	for(int j=5;j<=10000;j++){
		if(esPerfecto(j)==true){
			cout<<"divisores de "<<j<<": ";
			for(int i=1;i<j;i++){
				if((j%i)==0){
					cout<<i<<",";
				}
			}
		cout<<'\n';
		}
	}
	cout<<'\n';
	
	//2.1
	int y=9;
	if(esPrimo(y)==true)
		cout<<y<<" es un numero primo"<<endl;
	else
		cout<<y<<" no es un numero primo"<<endl;
	cout<<'\n';
	
	//2.2
	int n,contador=0,numeros=1;
	cout<<"ingrese la cantidad de numeros primos: ";
	cin>>n;
	cout<<'\n';
	cout<<"los "<<n<<" primeros numeros primos son; ";
	
	while(contador != n){
		if(esPrimo(numeros)==true){
			cout<<numeros<<",";
			numeros+=1;
			contador+=1;
		}
		++numeros;
	}
	cout<<'\n';
	
	//3
	int base=2, exponente=3;
	cout<<'\n';
	cout<<base<<" elevado a "<<exponente<<" es: "<<potencia(base,exponente);
	cout<<'\n';
	
	//4.1
	cout<<'\n';
	int n1=3,n2=2;
	cout<<"x es "<<n1<<endl;
	cout<<"y es "<<n2<<endl;
	cambio(n1,n2);
	cout<<"ahora es: "<<endl;
	cout<<"x es "<<n1<<endl;
	cout<<"y es "<<n2<<endl;
	
	//4.2
	cout<<'\n';
	int n3=3,n4=2;
	cout<<"x es "<<n1<<endl;
	cout<<"y es "<<n2<<endl;
	cambioBit(n3,n4);
	cout<<"ahora es: "<<endl;
	cout<<"x es "<<n1<<endl;
	cout<<"y es "<<n2<<endl;	
	
	return 0;
}

