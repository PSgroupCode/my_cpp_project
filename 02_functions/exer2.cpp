/*Write a function called power() that takes a double value for n and an int value for p, and
returns the result as a double value. Use a default argument of 2 for p,so that if this
argument is omitted, the number n will be squared. Write a main() function that gets val
ues from the user to test this function. */

#include <iostream>

using namespace std;


double power(double , int);

int main()
{   double n;
    int p;
    cout << "Enter the number:"; cin >> n;
    cout << "Enter the power of number: "; cin >> p;
    cout << "exponential value  is " << power(n,p)<<endl;
    return 0;
}

double power(double n , int p=2)
{
    double pow=1.0;
    for (int i =1 ;i<=p; i++)
    {
        pow  = pow*n;
     
    }
    
     return  pow;
}
