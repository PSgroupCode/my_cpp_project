// using escape sequences
#include <iostream>

using namespace std;

int main()
{
    cout << "\aOperation \"Hyperhype\" is now  activated! \n";           //\a alert escape sequence
    cout  << "Enter your agent code:_______ \b\b\b\b\b\b\b";            // \b backspace
    long code;
    cin >> code;

    cout << "\aYou entered "<< code << "...\n";
    cout << "\aCode verified! proceed with plan Z3! \n";

    return 0;
}