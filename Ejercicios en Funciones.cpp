#include <iostream>
using namespace std;

// #1
bool esMayor(int edad){
	if(edad<18)
		return false;
	return true;
}

// #2
int sucesion(int n,int au=0){
	if(n==au)
		return n;
	cout<<au<<",";
	sucesion(n,au+=1);
}

// #3
void operaciones(float x, float y, float z,float &may,float &men,float &prom){
	if(x>y && x>z)
		may=x;
	if(y>x && y>z)
		may=y;
	if(z>x && z>y)
		may=x;
	if(x<y && x<z)
		men=x;
	if(y<x && y<z)
		men=y;
	if(z<x && z<y)
		men=z;
	prom=(x+y+z)/3;
}

// #4
void evaluar(int x, int y,bool &multiplo2,bool &multiplosi, bool &igualdad2){
	if(((x%2)== 0)&&((y%2)==0))
		multiplo2=true;
	if((x%y)==0)
		multiplosi=true;
	if((x^2)==y)
		igualdad2=true;
}

// #5
bool primo(int numero){
	for(int i=2;i<numero;i++){
		if (!(numero%i))
			return false;
	}
	return true;
}

// #6
int primos(int x){
    int primo, divisores=0,j=2;
    while(j<x){
        for(int i=1;i<(j+1);i=i+1){
            if ((j%i)==0){
                divisores=divisores+1;
    		}
    		primo=i;
		}
		if(divisores==2){
                cout<<primo<<",";
		}
		j++;
		divisores=0;
    }
    return x;
}

// #7
int separacion(int x){
    int d1,d2,d3,d4,d5;
    if(x>=10000){
        if(x<=99999){
            d1=x/10000;
            d2=(x%10000)/1000;
            d3=((x%10000)%1000)/100;
            d4=(((x%10000)%1000)%100)/10;
            d5=((((x%10000)%1000)%100)%10)/1;
            cout<<d1<<'\t'<<d2<<'\t'<<d3<<'\t'<<d4<<'\t';
        }
    }
    return d5;
}

// #8
bool palindromo(int numero){
    int n, digitos, reverso = 0;
	n = numero;
	do{
		digitos = numero % 10;
		reverso = (reverso * 10) + digitos;
		numero = numero / 10;
	}
	while (numero != 0);
	if (n == reverso)
		return true;
	else
		return false;
}

// #9
bool aniobiciesto(int anio){
    if(anio % 4 == 0){
        if (anio%100 != 0 || anio % 400 == 0)
            return true;
    }
    return false;
}

// #10
int fibonaci(int cantidad){
    int x=1, y=1,z,fibo=3;
	cout<<x<<'\t';
	cout<<y<<'\t';
	while(fibo < cantidad){
		z=x+y;
		cout<<z<<'\t';
		fibo+=1;
		x=y;
		y=z;
	}
	z=x+y;
	x=y;
	y=z;
	return y;
}

// #Extra
int factorial(long long n) {
    if(n < 0)
        return 0;
    if(n > 1)
        return n*factorial(n-1);
    return 1;
}

int main() {
	int opcion;
	cout<<"1 = eres mayor?"<<endl;
	cout<<"2 = sucesion"<<endl;
	cout<<"3 = operaciones"<<endl;
	cout<<"4 = evaluar"<<endl;
	cout<<"5 = es primo?"<<endl;
	cout<<"6 = primos menores"<<endl;
	cout<<"7 = separacion de caracteres"<<endl;
	cout<<"8 = palindromo"<<endl;
	cout<<"9 = es bisiesto?"<<endl;
	cout<<"10 = fibonacci"<<endl;
	cout<<"11 = EXTRA factorial"<<endl;
	cout<<'\n';
	cout<<"ingese su opcion: ";
	cin>>opcion;
	cout<<'\n';

//funcion 1
if(opcion==1){
	int edad;
	cout<<"ingrese su edad: ";
	cin>>edad;
	cout<<'\n';
	if(esMayor(edad)==true)
        cout<<"eres mayor de edad";
    else
        cout<<"eres peque todavia";
    cout<<'\n';
}

//funcion 2
if(opcion==2){
	int numero;
	cout<<"ingrese el numero: ";
	cin>>numero;
	cout<<'\n';
	cout<<sucesion(numero)<<endl;
    cout<<'\n';
}

//funcion 3
if(opcion==3){
	float x,y,z,menor,mayor,promedio;
	cout<<"ingrese numero: ";
	cin>>x;
	cout<<"ingrese numero: ";
	cin>>y;
	cout<<"ingrese numero: ";
	cin>>z;
	cout<<'\n';
	operaciones(x,y,z,mayor,menor,promedio);
	cout<<"el mayor es: "<<mayor<<endl;
	cout<<"el menor es: "<<menor<<endl;
	cout<<"el promedio es: "<<promedio<<endl;
    cout<<'\n';
}

//funcion4
if(opcion==4){
	int numero1,numero2;
	bool multiplo2=false, multiplosi=false, igualdad2=false;
	cout<<"ingrese numero: ";
	cin>>numero1;
	cout<<"ingrese numero: ";
	cin>>numero2;
	cout<<'\n';
	evaluar(numero1,numero2,multiplo2,multiplosi,igualdad2);
	if(multiplo2==true)
		cout<<numero1<<" y "<<numero2<<" son multiplos de 2"<<endl;
	else
		cout<<numero1<<" y "<<numero2<<" no son multiplos de 2"<<endl;
    cout<<'\n';

	if(multiplosi==true)
		cout<<numero1<<" es multiplo de "<<numero2<<endl;
	else
		cout<<numero1<<" no es multiplo de "<<numero2<<endl;
    cout<<'\n';

	if(igualdad2==true)
		cout<<"la potencia al cuadrado de "<<numero1<<" es "<<numero2<<endl;
	else
		cout<<"la potencia al cuadrado de "<<numero1<<" no es "<<numero2<<endl;
    cout<<'\n';
}

//funcion 5
if(opcion==5){
	int numero;
	cout<<"ingrese numero: ";
	cin>>numero;
	cout<<'\n';
	if(primo(numero)){
		cout<<"es primo";
	}
	else
	   cout<<"no es primo";
    cout<<'\n';
}

//funcion 6
if(opcion==6){
	int numero;
	cout<<"ingrese numero: ";
	cin>>numero;
	cout<<'\n';
	cout<<primos(numero);
    cout<<'\n';
}

//funcion 7
if(opcion==7){
    int n;
    cout<<"ingresar numero ( 5 digitos) :";
    cin>>n;
    cout<<'\n';
    cout<<separacion(n);
    cout<<'\n';
}

//funcion 8
if(opcion==8){
	int numero;
	cout << "ingrese un numero: ";
	cin >> numero;
	cout<<'\n';
	if(palindromo(numero)==true)
        cout <<"el numero es palindromo";
    else
		cout << "el numero no es palindromo";
    cout<<'\n';
}

//funcion 9
if(opcion==9){
    int anio;
    cout<<"ingrese un anio:";
    cin>>anio;
    cout<<'\n';
    if(aniobiciesto(anio)==true){
        cout<<"Es biciesto";
    }
    else
        cout<<"No es biciesto";
    cout<<'\n';
}

//funcion 10
if(opcion==10){
    int x;
	cout << "ingrese un numero: ";
	cin >> x;
	cout<<'\n';
	cout<<fibonaci(x);
	cout<<'\n';
}

//funcion EXTRA
if(opcion==11){
    long long numero;
    cout<<"ingresa un numero: ";
    cin>>numero;
    cout<<'\n';
    cout<<"Factorial de "<<numero<<" es: "<<factorial(numero);
    cout<<'\n';
}

return 0;
}
