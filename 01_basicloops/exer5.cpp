// four function calculator . adding ,subtracting ,multiplying ,dividing
#include <iostream>
using namespace std;

int main()
{
    float fnum ,snum ;
    char ch ,chr;
    float sum ,sub , multi ,div;
 do
 {
    cout << "Enter first number , operator , second number:" ; 
    cin >> fnum >> ch >> snum;
    switch (ch)
    {
    case '+':
        sum = fnum + snum;
        cout << "your sum is : " << sum << endl;
        break;
    case '-':
        sub = fnum - snum;
        cout << "your value is : " << sub << endl;
        break;
    case '/':
       div = fnum / snum;
       cout << "your value is : " << div << endl;
        break;
    case '*':
       multi = fnum * snum;
       cout << "your value is :" << multi << endl;
        break;
    }
    cout << "\n Do another ? (y/n):"; cin >> chr;
  }
  while (chr != 'n');
  
  
   return 0; 
}