# include <iostream>
using namespace std;

int main()
{
    char ch='X';

    for (int i =1; i<21; i++)          // for lines
    {
        for (int k=20; k>i; k--)        // for spaces
        {
            cout << " ";
        }
        for (int j=0; j<((2*i)-1); j++) // for charactor
        {
           cout << ch;
        }
        
        cout << endl;
    }
     
    for (int i =1; i<21; i++)
    {
        for (int k=1; k<i; k++)
        {
            cout << " ";
        }
        for (int j=40; j>((2*i)-1); j--)
        {
           cout << ch;
        }
        
        cout << endl;
    } 
    
    return 0;
}