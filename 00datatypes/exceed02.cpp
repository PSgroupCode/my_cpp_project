// exceeding some integer limits
#include <iostream>
#include <climits>
#define ZERO 0                 //makes zero symbol for 0 value
using namespace std;           //define INT_MAX as large

int main()
{
    short sam =SHRT_MAX;              //initialize a variable to max vlaue
    unsigned short sue = sam;          //okay if variable sam already defined

    cout << "Sam has "<< sam << " dollars ad Sue has "<< sue;
    cout << " dollars deposited. " << endl;
    cout << "Add $1 to each account. "<< endl <<"Now";

    sam = sam + 1;
    sue = sue + 1;

    cout << " Sam has " << sam << " dollars and  Sue has " <<sue;
    cout << " dollars deposited. \nPoor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Sam has " << sam << " dollars and Sue has " <<sue;
    cout << " dollars deposited. " << endl;
    cout << "Take $1 from each account ." << endl <<"Now";

    sam = sam-1;
    sue = sue-1;

    cout << "Sam has "<< sam << " dollars and Sue has "<<sue;
    cout << " dollars deposited. "<< endl << "Lucky Sue!"<<endl;

    return 0;
}