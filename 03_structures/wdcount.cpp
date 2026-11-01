//demonstrates enums , counts words in phrase
#include <iostream>
using namespace std;
 
enum itsaWord {NO, YES};       //NO =0,YES = 1

int main()
{
    itsaWord isword =NO;      // Yes when in a word
                              //NO when in whitespace
    
    char ch = 'a';          // character read from keyboard
    int wordcount =0;      // number of words read

    cout << "Ente a phrase: \n";
    do 
    {
      ch =cin.get();         //get character
      if (ch ==' '|| ch =='\r')        // if white space,
      {
        if (isword ==YES)              //and doing a word,
        {                              // then it's end of word
            wordcount++;            //count the word
            isword =NO;             //reset flag
        }
      }
      else 
      {
        if (isword == NO)            // if start of word
         {
            isword =YES;            // then set flag
         }

      }
    
    } while (ch != '\r' );   //quit on the enter key

    cout << "\n ---Word count is " << wordcount << "---\n";
    return 0;
               
}