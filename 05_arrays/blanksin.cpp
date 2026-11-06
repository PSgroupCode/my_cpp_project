//reads string with embedded blanks
#include <iostream>

using namespace std;

int main()
{
    const int MAX =80;                         //max character in string
    char str[MAX] ;                            // string variable str

    cout << "\nEnter a string : ";
    cin.get(str, MAX);
    cout << "you entered : "<< str <<endl;
    return 0;
}