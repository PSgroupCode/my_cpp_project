 // defining your own function
#include <iostream>
void pushpendra(int); // function prototype for pushpendra()

int main()
{
    using namespace std;
    pushpendra(4);    // call the function
    cout << "pick an integer:";
    int count;
    cin >> count;
    pushpendra(count);  // call it again
    cout << " Done!" << endl;
    return 0;
}

void pushpendra(int n)  // define the function
{
    using namespace std; 
    cout << " pushoendra says touch your toes " << n << " times." << endl;
                //void function  don't need return statement
}

