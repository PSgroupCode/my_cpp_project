/* Create a class that imitates part of the functionality of the basic data type int. Call the
class Int (note different capitalization). The only data in this class is an int variable.
Include member functions to initialize an Int to 0, to initialize it to an int value, to dis
play it (it looks just like an int), and to add two Int values.
Write a program that exercises this class by creating one uninitialized and two initialized
Int values, adding the two initialized values and placing the response in the uninitialized
value, and then displaying this result*/

#include <iostream>

using namespace std;
 

class Int                                  //
{
    private:
       int value;
    public:
        Int():value(0)               // constructor no arg
        { }

        Int(int v): value(v)            // constructor with arg
        {   }
        
        void display ()                 // display the value 
        {
            cout << "the sum of two number:" << value;
        }
        void add_int( Int ,Int);            // declaration  
};

void Int ::add_int(Int v1,Int v2)           // add to int value
{
    value = v1.value + v2.value;

}
int main()
{ 
    Int value1=3, value2=6 ;              // define and initialize
    Int value3;                          // define value

    value3.add_int(value1,value2);          // value3=value1+value2

    value3.display();                    // display the value3
    cout << endl;
    return 0;
}