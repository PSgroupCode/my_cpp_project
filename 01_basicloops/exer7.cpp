// 
#include <iostream>
using namespace std;

int main()
{
    char ch = 'X';
    for (int i= 1; i<6; i++)
    {
        for (int j=6; j>i; j--)
        {
            
            cout << ch;
        }
        cout <<endl;
    }
}