// some integer limits
#include <iostream>
#include <climits>                             // use l
using namespace std;

int main()
{
    using namespace std; 
    int n_int = INT_MAX;                    //initialize initialize n_int
    short n_short = SHRT_MAX;                //symbols dfined in limits .h
    long n_long = LONG_MAX;

    //sizeof operator yields size of type or of variable
    cout  <<"int is "  << sizeof (int) << "  bytes. "<<endl;
    cout << "short is " << sizeof n_short  << "  bytes. "<< endl;
    cout << " lont is " << sizeof n_long   << "  bytes. "<<endl;


    cout << "Maximum values: " << endl;
    cout << "Int : " << n_int << endl;
    cout << "short: "<< n_short << endl;
    cout << "long: " << n_long << endl << endl;

    

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byets = " << CHAR_BIT << endl;

    return 0;
}