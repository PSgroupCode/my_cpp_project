// calculates factorials , demonstrates for loop
#include <iostream>
using namespace std;
  
int main()
{
    unsigned int numb;                     // unsigned for positive value
   
    
    while (1)                                    // this loop ask for  repeatedly number and calculate it
    {
        cout << "Enter a number: ";
        cin >> numb;
        if (numb !=0)                            // if user enter 0 then program will terminate
        {                                     // get number
            unsigned long fact = 1;           //long for larger  value
            for (int j = numb; j > 0; j--)
            {   
                fact = fact*j;
            }
            cout << "Factorial is "   << fact <<endl;
       }
       else
       {
            cout << "you enter 0, this program is end." << endl;
            break;
       }
    }
    return 0;
}