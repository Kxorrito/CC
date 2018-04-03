#include <iostream>

using namespace std;

int main(){
   int a;
   cout<<"introducir numero: ";
   cin>>a;
   for (int i=1;i<a; i++){
    int cont =1;
    for(int z=2; z<i; z++){
        if (i%z==0){
            cont =0;
        }
    }
    if (cont==1){
        cout<<i;
        }
        else{
            cont=1;
        }
   }
}
