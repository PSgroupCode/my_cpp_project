//simple string variable
#include <iostream>

using namespace std;

int main()
{
    const int MAX=80;                     //max characters in string
    char str [MAX];                      // string variable str
    
    cout << "Enter a string ";
    cin >> str;                         // put string in str

    cout << "You entered: " << str << endl;
    return 0;
}