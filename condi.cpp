// prints 'x' every 8 colums
//demonstrates conitional operator
#include <iostream>
using namespace std;

int main()
{
    for (int j = 0; j<80; j++)    // for every colunm,
    {                              // ch is 'x' if column is
        char ch = (j%8) ? 'y' : 'x'; // multiple of 8 and
        cout << ch << endl;                   // ' ' space otherwise
    }
    return 0;
}