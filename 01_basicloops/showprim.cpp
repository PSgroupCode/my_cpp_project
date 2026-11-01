// displays prime number distribution
#include <iostream>
using namespace std;

int main()
{
    const unsigned char WHILE = 219;  // solid color (prime)
    const unsigned char GRAY = 176; // gray (non primes)
    unsigned char ch;
                       //for each screan position
    for (int count =0; count < 80*25-1; count++)
    {
        ch = WHILE;     //assume it's prime

        for (int j =2 ; j<count; j++)  //divide by every integer from
        {
            if (count%j ==0)        //  2 on up; if remainder is 0;
            {
                ch = GRAY;      //it's not prime
                break;           // break out of innerloop
            }
            cout << ch;          // display the character
        }
    
    }                   
}
