/*A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone. Create two structure variables of type phone. Initialize one, and have the user
input a number for the other one. Then display both numbers.*/

#include <iostream>
using namespace std; 

struct phone_number             // define structure
{
    int area_code;
    int exchange;
    int number;
};
 
int main()
{
    // I create two structure variables , first is  initialize and second define;

    phone_number phone1 ={ (212), 767, 8900};    // initialize the structure varible
    phone_number phone2;                       //define structure variable

    cout << "Enter your area code, exchange, and number: ";
    cin >> phone2.area_code >> phone2.exchange >> phone2.number;
    
    cout <<endl;
    cout << "My number is " ; 
    cout << "(" << phone1.area_code << ")" << " " << phone1.exchange << "-" << phone1.number
         << endl;
    cout <<"Your number is " << "("<<phone2.area_code<<")"<< " " << phone2.exchange <<"-"<<phone2.number << endl;
    
    return 0;

}