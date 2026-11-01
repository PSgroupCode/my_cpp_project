/*/ temperature conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit */
#include <iostream>
using namespace std;

int main()
{
    int a;
    float F ,C;
    cout << "Type 1. to convert Fahrenheit to Celsius,\n     2. to convert Celsius to Fahrenheit:"<< endl;
    cin >> a;
    if (a==1)
    {
        cout << "Enter temperature in Fahrenheit: " ; cin >>F;
        C = (F -32)*5/9;
        cout <<"In Celsius that's "<<C << endl;
    }
    else if (a==2)
    {
        cout << "Enter temperature in Celsius: "; cin >> C;
        F = (9/5*C)+32;
        cout << "In Fahrenheit that's " << F << endl;
    }
    else
    {
        cout << " please Enter only 1 and 2 . this number is not valid."<< endl;;
    }
    return 0;
}