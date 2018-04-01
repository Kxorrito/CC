#include <iostream>


using namespace std;

int main()
{
     int n, num, digit, cont = 0;

     cout << "el numero positivo: ";
     cin >> num;

     n = num;

     do 
     {
         digit = num % 10;
         cont = (cont * 10) + digit;
         num = num / 10;
     } while (num !=0);

     cout << " el numero de reversa es: " << cont << endl;

     if (n == cont)
         cout << " si es palindrome";
     else
         cout << " no es palidrome";

    return 0;
}