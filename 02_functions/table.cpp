#include <iostream>

using namespace std;

void starline() ;                  //function declaration (prototype)

int main()
{
    starline();                    // call to function
    cout << "Date type    Range "<<endl;
    starline();
    cout << "char        -128 to 127 "<< endl
         << "short         -32,768 to 32,767"<<endl
         << "int           System dependent" <<endl
         << "long           -2,147,483,647"<<endl;
    starline();
    return 0;
}  
//function definition
void starline()                   //function declarator
{
    for (int j=0; j<45; j++)          //function body
    {
        cout << '*';
    }
     cout <<endl;
}