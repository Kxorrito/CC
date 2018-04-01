#include<iostream>

using namespace std;

int main(){
    int edad;
    cout<<"digite edad: ";
    cin>>edad;
    if((edad>=18)&&(edad<=25)){
	cout<<"su edad esta en el rango";
    }
    else{
        cout<<"su edad no esta en el rango";
    }
    return 0;
}	