#include <iostream>
using namespace std;

int encontrar_edad (int edad);
int cuenta (int num);
int menor_ma_pro( int n1,n2,n3);
int evaluar (int n_1,n_2);
int primo (int n );
int primo_n( int num );
int tabular ( int x );
int palindrome (int x);
int main(int bis);
int main (int c );
int factorial( int fac);



int main()
{
  int nedad,x;

  nedad = cuenta (x);

  return 0;

}



int encontrar_edad (int edad) {
  //Problem 1. Implementar un programa que evalue si la edad ingresada por teclado se refiere a una persona mayor o menor de edad.

  cout << " ingrese su edad: " << endl;
  cin >> edad;
  (edad>=18) ?  cout << "eres mayor de edad :)" :  cout << "no eres mayor de edad :(" ;
  return edad ;

}



int cuenta (int num)
{
  /*Problem 2. Implementar un programa que solicite un n ´umero n e imprima los n ´umero
  desde el 1 hasta n separados por comas. OJO, despues del  ´ultimo n ´umero no debe imprimir
  la ’,’.*/

  int a=2,b=1;
  std::cout << "hasta que numero quieres que cuente:  " << '\n';
  std::cin >> num;

  std::cout << b ;
  while (a!=num) {
    a++;
    std::cout << "," << a ;
  }

return 0;
}


int menor_ma_pro( int n1,n2,n3)
{

  /*Problem 3. Implemente un programa que solicite el ingreso de 3 n ´umeros e imprima: (i)
  el menor, (ii) el mayor y (iii) el promedio de dichos n ´umeros. */

     float n4;

     if ((n1>n2)and(n1>n3)){
         cout << "mayor es   "<<n1 << endl;
     }
     else if ((n1<n2)and(n2>n3)){
         cout << "mayor es   "<<n2 << endl;
     }
     else{
         cout<<"mayor es  "<<n3<<endl;
     }

     if ((n1<n2)and(n1<n3)){
         cout << "el menor es   "<<n1 << endl;
     }
     else if ((n1>n2)and(n2<n3)){
         cout << "el menor es   "<<n2 << endl;
     }
     else{
         cout<<"el menor es  "<<n3<<endl;
     }


     n4=(n1+n2+n3)/3;
     cout<<"promedio es  "<<n4<<endl;
     return 0;
  }


  int evaluar (int n_1,n_2)
  {

    /*Problem 4. Implemente un programa que solicite dos n ´umeros y evalue:
    a) Si el primer y el segundo n ´umero son m ´ultiplos de 2.
    b) Si el primer n ´umero es m ´ultiplo del segundo.
    c) Si el primer elevado al cuadrado tiene como resultado el segundo. */

    if (true) {
      if (n_1%2==0 && n_2%2==0) {
        std::cout << "son multiplos de dos" << '\n';
      }
      else{
        std::cout << "no son multiplos de dos" << '\n';
      }
    }


    if (true) {
      if (n_1%n_2==0) {
        std::cout << "el primero es multiplo del segundo " << '\n';
      }
      else{
        std::cout << "el primero no es multiplo del segundo" << '\n';
      }
    }


    if (true) {
      if (n_1*n_1 == n_2) {
          std::cout << "el primer numero elevado al cuadrado es igual al segundo " << '\n';
        }
      else{
        std::cout << "el primer numero elevado al cuadrado no  es igual al segundo " << '\n';
      }
    }

  return 0;
  }

  int primo (int n ){

      /*Problem 5. Implemente un programa que solicite un n ´umero y evalue si dicho n ´umero es
      primo. */
     int a=0;
           cout<<"Ingrese numero"<<endl;
           cin>>n;
           for(int i=1;i<(n+1);i++){
           if(n%i==0){
               a++;
              }
           }
           if(a!=2){
                cout<<"No es Primo";
              }else{
                  cout<<"Si es Primo";
           }
      return 0;
  }

  int primo_n( int num )
  {


    /*Problem 6. Implemente un programa que solicite un n ´umero n e imprima todos los n ´umero
    primos menores a n.*/

    int  n, p, num_columnas;
       cout << "Introduzca la cantidad de numeros primos que quiere obtener: ";
       cin >> num;
       cout << '\n' << endl;
       num_columnas = 0 ;
       n = 2;
       while(n <= num)
       {
           for (p = 2; n % p!= 0; p++);
           if (p == n)
           {
               cout << n <<", ";
               if(++num_columnas % 10 == 0)
                   cout << "\n" << endl;
           }
           n++;
       }
       cout << "\n" << endl;

  return 0;
  }

  int tabular ( int x )
  {

    /*Problem 7. Implemente un programa que solicite un n ´umero de cinco d ´igitos e imprima
    los d ´igitos separados por un caracter de tabulaci ´on.*/

        int x,tmp;

        cin>>x;
        for(int i=10000;i>=1;i=i/10){
            tmp=x/i;
            cout<<tmp<<"    "<<"\t";
            x=x%i;
        }


        return 0;
    }

    int palindrome (int x)
    {

      /*Problem 8. Implemente un programa que solicite un n ´umero de cinco d ´igitos e indique si
      se trata de un palindrome. Tome en cuenta que un palindrome cuando se lee de derecha a
      izquierda es lo mismo que leerlo de izquierda a derecha, 12321 es un palindrome y 12345 no
      es un pal0indrome.*/

      int a1,b2,c3,d4,e6;
      cout << "ingresa tu numero de 5 cifras" << endl;
      cin>>x;
      a1=x%1000/100;
      b2=x%10;
      c3=x%100/10;
      d4=x/10000;
      e6=x%10000/1000;
      if((d4==b2)and(e6==c3)){
          cout<<"es palindromo"<<endl;
      }
      else{
          cout<<"no es palindromo"<<endl;
      }


    return 0;
    }


    int main(int bis)
    {
      //Problem 9. Implemente un programa que evalue si un a ~no es bisiesto.

      std::cout << "escribe un año para determinar si es bisiesto " << '\n';
      std::cin >> bis;

        if(bis%4==0 ){
          std::cout << "es anio bisiesto " << '\n';
           }
        else{
          std::cout << "no es una año bisiesto" << '\n';
        }
    return 0;
    }

    int main (int c ){

      /*Problem 10. Implemente un programa que solicite un n ´umero n e imprima los n n ´umeros
      de la serie fibonacci.*/

    int a = 1, b = 0; // iniciamos en 1 y 0 porque son los anteriores numeros
    float d;
    std::cout << "escribe un numero " << '\n';
    std::cin >> c;
    d=(float (c)/2)+0;

  std::cout << "d :   " << d << '\n';
    while (d>0){
    d--;
    a=a+b;
    b=a+b;
    }

    if (c%2==0){
      cout << b << endl;

    }

    else{
      cout << a << endl;
    }

    return 0;
    }

    int factorial( int fac)
    {
      //Problem EXTRA. Implemente un programa que solicite un n ´umero n e imprima el valor
      //factorial de dicho n ´umero.

      int fac_2=1;
      std::cout << "escribe un numero... factorial " << '\n';
      std::cin >> fac;

      while (fac!=1) {
        fac_2=fac_2*fac;
        fac--;
      }
      std::cout << "el factorial es " << fac_2 << '\n';


    return 0;
    }