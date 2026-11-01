// construct a program that displays a pyramid of Xs on screan.
#include <iostream>
using namespace std;

int main ()
{
    char ch = 'X';
    for (int i=1; i< 11; i++)   //for  line  
    {
        for(int j=0; j<i; j++)
        {
            cout << ch << " ";
        }
        cout <<endl;
    }
    return 0;
}