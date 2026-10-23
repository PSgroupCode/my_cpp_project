// demonstrates WHILE Loop
#include <iostream>
using namespace std;
  
int main ()
{
    int n = 99;           // make sure n isn't intialized to 0

    while (n != 0)        // loop until n is 0
          cin >> n;       // read a number into n
    cout << endl;
    return 0;
}