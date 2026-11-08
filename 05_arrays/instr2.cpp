//reading more than one word with get() 
#include <iostream>

using namespace std;

int main()
{
    const int ArSize =20;
    char name[ArSize];
    char dessert [ArSize];

    cout << "Enter your name:\n";
    cin.get (name, ArSize).get(); 
    return 0;
}