#include <iostream>

using namespace std;

int main()
{
unsigned long int num;
 cout<<"numero:";
 cin>>num;

 cout<<"el factorial"<<num<<"es";
 int acumula=1;
 for(; num>0; acumula *= num--);
 cout<<acumula<<".\n";

 return 0;
}
