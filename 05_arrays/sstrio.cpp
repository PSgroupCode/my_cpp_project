//string class input /output
#include <iostream>
#include<string>                      //for string class


using namespace std;

int main()
{
    string full_name, nickname, address;
    string greeting ("Hello, ");

    cout << "Enter your full name: ";
    getline(cin, full_name);                    //reads embedded blanks
    cout << "your full name is: "<< full_name << endl;

    cout << "Enter your nickname: ";
    cin >> nickname;                       //input to string object

    greeting +=nickname;                //append name to greeting
    cout << greeting << endl;              //output: "Hello, jim"

    cout << "Enter your addres on separat lines\n";
    cout << "Terminate with '$'\n";
    getline(cin, address, '$')   ;             //reads multiple lines
    cout << " your address is : "<<address <<endl;
    return 0;
}