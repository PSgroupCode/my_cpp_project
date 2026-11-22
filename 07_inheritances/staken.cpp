// overloading functions in base and derived 
#include <iostream>

using namespace std;


class Stack 
    {
        protected:
            enum { MAX =3};                 //size of stack array
            int st [MAX];                  //stack of stack array
            int top;                      //index to top of stack
        public:
            Stack()                             //constructor
                {top = -1;}
            void push (int var)                   //put number on stack
                {st[++top] =var;}
            int pop ()                           //take number of stack
                {return st[top--];}
    };

class Stack2      : public Stack
    {
        public:
            void push( int var)                      //put number on stack
                {
                    if (top >= MAX-1)             //error if stack full
                        { cout << "\nError : stack is full "; exit(1);}
                    Stack::push(var);                  //call push() in stack class

                }
            int pop()                               //take number off stack
                {
                    if (top < 0)
                        { cout << "\nError: stack is empty '\n"; exit( 1);}
                    return Stack::pop();                        //call pop() in stack class
                }
    };
int main()
{
    Stack2 s1;

    s1.push(11);
    s1.push(22);
    s1.push(33);                          //push some values  onto stack


    cout << endl << s1.pop();               //pop some values from stack
    cout << endl << s1.pop() ;
    cout << endl << s1.pop();
    cout << endl << s1.pop();           //oops, popped on too many
    cout << endl;
    return 0;
}