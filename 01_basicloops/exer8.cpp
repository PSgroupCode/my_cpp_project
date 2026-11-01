#include <iostream>
using namespace std;

int main()
{
    char ch = 'X';
    for (int i= 1; i<21; i++)
    {
        for (int k=20; k>i ;k--)
            {
                cout << " ";
            }
        for (int j=0; j<i; j++)
        {
            
            
            cout << ch  ;
        }
        cout <<endl;
    }
}