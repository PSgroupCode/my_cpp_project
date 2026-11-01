// .... defining you own function
#include <iostream>

void simon(int);    // function prototype for simon()

int main(){
    using  namespace std;
    simon(3);    // call the simon() function
    cout << "pick an integer: ";
    int count;
    cin >> count;
    simon(count);    //call it again
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)   // define he simon() function
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;  //void function don't need return statements
    
}