//overloaded '+'  operator concatenate
#include <iostream>
#include <string.h>                   // for strcpy( ), strcat()
#include <stdlib.h>                 //for exit()


using namespace std;

class String
    {
        private:
            enum{SZ = 80};             //size of String objects 
            char str[SZ] ;           //holds a string 
        public:
            String()
                {strcpy( str, "");}              //constructor ,no args
            String( const char s[])                  //constructor , one arg
                {strcpy(  str, s); }        
            void display() const            //display the String
                {cout << str; }
            String operator + (String ss) const           //add Strings
                {
                    String temp;                       //make atemporary String
                    if (strlen(str)+  strlen(ss.str)  <SZ)
                        {
                            strcpy(temp.str, str);                  //copy this string to temp
                            strcat(temp.str, ss.str);               // add the argument string
                        }
                    else 
                        { cout << "\nString overflow"; exit(1); }
                    return temp; 
                }


    };

int main()
{
     String s1 = "\nMerry Christmas!  ";           //uses constructor 2
     String s2 = "Happy new year!" ;               //uses Constructor 2
     String s3;                                //uses constructor 1

     s1.display();
     s2.display();
     s3.display(); 

     s3 =s1 + s2;                           // add s2  to s1,

     s3.display();                         //assign to s3
     cout << endl;
    return 0;
}