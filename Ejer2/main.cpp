#include <iostream>

using namespace std;

int main()
{
    int n;
    int z=0;
    cout<<"ingresar numero: ";
    cin>>n;

    while(z!=n)
        {
        z++;
        cout<<z<<";";
        if(z==n){
            cout<<z;
        }
    }
    return 0;
}
