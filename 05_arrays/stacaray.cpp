//a stack as a class
#include <iostream>

using namespace std;


class Stack
{
    private:
        enum{MAX = 10};             // (non standard syntax)
        int  st[MAX];               // stack: array of integer
        int top;                    // number of top of stack

    public:
        Stack()                       //constructor
        {top =0;}            

        void push(int var)             //put number on stack
        {
            st[++top ] = var;
        }

        int pop()                        // take number off stack 
        {return st[top--];}
};

int main()
{
    Stack s1;
    s1.push(11);
    s1.push(22);
    cout << "1: "<<s1.pop() <<endl;
    cout <<"2: " << s1.pop() <<endl;
    return 0;
}