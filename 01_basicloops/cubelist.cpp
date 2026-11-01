// lists cubes from 1 to 30
#include <iostream>
#include <iomanip>           // for setw()
using namespace std;
int main(){

    int i;                   // define  loop variable
    for(i=1; i<31; i++){      //loop from 1 to 30
        cout << setw(4) << i;  // display 1st column
        int cube = i*i*i;        // calculate cube
        cout << setw(6) << cube << endl;   // display 2nd column

    }
    return 0;
}