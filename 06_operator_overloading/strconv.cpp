//convert between ordinary strings and class String
#include <iostream>
#include<string.h>
using namespace std;


class String                  //user defined string type
    {
        private:
            enum{ SZ =80};            //size of all String object
            char str[SZ];             // holds a C-string
        public:
            String()                  //no arg constructor
                { str[0] = '\0';}
            String ( const char s[])           //one are constructor
                { strcpy(str, s); }       //convert C- string to String
            void display () const        //display the String
                { cout << str; }
            operator char *()         //conversion operator 
                { return str;}
    };
int main()
{
    String s1;                  //use no arg constructor
                               //ceate and initialize cstring
    
    char xstr[] ="joyeux Noel!";

    s1= xstr;                   //use 1 arg constructor
                                //to convert C-string to String
    s1.display();              //display String

    String s2 = "Bonne Annee!";      //uses ! arg constructor
                                        //to initilize String

    cout << static_cast<char*>(s2);  //use conversion operator
    cout << endl;                      //to convert String to Cstring
                                      //before sending to <<op  
    return 0;
}