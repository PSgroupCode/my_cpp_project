#include <iostream>
using namespace std;

int main()
{
    char ch='X';

    for (int i = 1; i<6; i++)
    {
        for(int j=1 ;j<i; j++)
        {
            cout << " ";
        }
        for(int k=6 ; k>i; k--)
        {
            cout << ch ;
        }
        cout << endl;
    }
}