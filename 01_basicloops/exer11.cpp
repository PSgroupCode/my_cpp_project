/*Write a program that calculates how much money you’ll end up with if you invest an
amount of money at a fixed interest rate, compounded yearly. Have the user furnish the
initial amount, the number of years, and the yearly interest rate in percent.
*/
#include <iostream>
using namespace std;

int main()
{
     double principle ;
     float  years;
     float rate;
     
     cout << "Enter initial amount :" ; cin >> principle;
     cout << "Enter number of years:"; cin >> years;
     cout << "Enter interest rate (percent per year):"; cin>>rate;

      
     for (float i=1.0; i<=years; i++)
     {
         double interest = principle*rate/100;
         principle =principle +interest;
     }
     cout << "At the end of "<< years << ", you will have " << principle << " dollars"<< endl;
}