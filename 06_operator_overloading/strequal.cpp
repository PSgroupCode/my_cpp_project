//overload '==' operator compares strings
#include <iostream>
#include <string.h>
using namespace std;


class String                               //user defined
    {
        private:
            enum {SZ=80};
            char str[SZ];
        public:
            String ()                      //constructor , no args
                { strcpy(str, "");}
            String (const char s[])             //constructor , one arg
                {strcpy(str, s);}
            void display() const            //display a String
                {cout << str;}
            void getstr()                   //read a string
                {cin.get(str, SZ);}
            bool operator ==(String ss) const      //check for equality
                {
                    return (strcmp(str, ss.str) == 0) ? true : false;
                }
    };

int main()
{
    String s1 = "yes";
    String s2 = "no";
    String s3;

    cout << "\nEnter 'yes' or 'no' : ";
    s3.getstr();                      //get String from user
    s3.display();
    if (s3 == s1)                       //compare with "yes" 
        cout << "\nyou typed yes\n";
    else if (s3 == s2)
        cout << "\nyou typed no\n";
    else
        cout << "\nyou didn't follow instructions\n";
    return 0;
}