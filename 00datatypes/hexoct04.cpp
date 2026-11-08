// display values in hex and octal
#include <iostream>

using namespace std;

int main()
{
    int chest =42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur  cuts a strinkng figlure!" <<endl;
    cout << "chest = " << chest << "(decimal)" <<endl;
    cout << hex;                //manipulator for changing number base
    cout << "waist = "<< waist << " hexadecimal" << endl;
    cout << oct;                    //manipulator for changing number base
    cout << "inseam = " << inseam << "(octal) " << endl;

    return 0;
}