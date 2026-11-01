// any given nuber table generate 
#include <iostream>
using namespace std;
#include <iomanip>


int main()
{
    int a;
    cout << "Enter any number which you want table: " << endl;
    cin >> a;
    for (int i =1; i <=10; i++)
    {
        cout << setw(5)<< a*i << "  " ;

    }
    cout << endl;
    return 0;
}