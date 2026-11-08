// increment counter variable with ++ operator
#include <iostream>

using namespace std;


class Counter 
    {
        private:
            unsigned int count;                  //count
        public:
            Counter() : count(0)                   // constructor
                {   }
            unsigned int  get_count()             //return count
                { return count;}
            void operator ++ ()                   //increment   (prefixe)
                {
                    ++count;
                }
    };

int main()
{
    Counter c1, c2;                 //define and initialize 

    cout << "\nc1=" << c1.get_count();            //display
    cout <<"\nc1="  << c2.get_count();       

    ++c1;                                //increament c1
    ++c2;                                 //increament c2
    ++c2;                                 //increament c2

    cout << "\nc1=" << c1.get_count();           //display again
    cout << "\nc2=" << c2.get_count() << endl;
    return 0;
}