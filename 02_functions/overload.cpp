//demonstrates function overloading
#include <iostream>

using namespace std;

void repchar();                  //declaration
void repchar(char);
void repchar(char,int);

int main()
{
    repchar();
    repchar('=');
    repchar('+', 30);
    return 0;
}

// displays 45 asterisk
void repchar()
{
    for(int i=0; i<45; i++)             //always loops 45 times
    {
        cout <<'*';               //always prints asterisk
    }
    cout << endl;
}

//display 45 copies of specified character
void repchar (char ch)
{
    for(int i=0; i<45; i++)             //always loops 45 times
    {
        cout << ch;               //always prints specified character
    }
    cout << endl;
}

// display specified number of copies of specified character
void repchar(char ch , int n)
{
    for(int i=0; i<45; i++)             //always loops 45 times
    {
        cout << ch;               //always prints specified character
    }
    cout << endl;
}