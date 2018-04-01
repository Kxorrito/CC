#include <iostream>
#include <string>
using namespace std;

int main()
{
    int mayor=0,menor=0;
    double prom, num=0, sum=0, nota, cant;
    cout<<"ingresar notas: ";
    cin>>cant;
    cout<<"ingresa la nota:";
    cin>>nota;
    mayor = menor = nota;
    cant--;
    while(cant!=0){
        cout<<"ingresa la nota:";
        cin>>nota;
        if(nota>mayor){
            mayor=nota;
        }
        if(nota<menor){
            menor=nota;
        }
        sum=sum+nota;
        num=num+1;
        cant=cant-1;
    }
    
    prom=sum/num;
    cout<<"el promedio es:"<<prom<<endl;
    cout<<"la mayor nota es:"<<mayor<<endl;
    cout<<"la menor nota es:"<<menor;
    return 0;
}    