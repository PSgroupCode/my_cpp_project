// the char type and int type
#include <iostream>

using namespace std;

int main()
{
    char ch = 'M';               //assign ASCII code
    int i = ch;                 // store same code in and int
    cout << "The ASCII code for " << ch << " is " << i<< endl;

    cout  << "Add one to the character code: "<<endl;
    ch = ch + 1;                       // change character code in c
    i = ch;                          // save new charactr code in i
    cout << "The ASCII code for " << ch << " is " << i <<endl;

    //using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    //using cout.put() to display a cha constant
    cout.put('!');

    cout << endl << "Done" << endl;
    return 0;
}