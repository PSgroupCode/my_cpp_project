//display number from 100 to 110;
#include <iostream>
using namespace std;

int main ()
{
    int i=100;
    for (i; i<111; i++)
    {
         cout << i<<endl;
    }

    int j=100;
    while (j<=110)
    {
        
        cout << j << " ";
        j=j+1;
    }   
     cout << endl;
    int y=100;
    do 
    {
        
        cout << y << endl;
        y++;
    }
    while (y<110);
    cout << endl;     
    return 0;
}