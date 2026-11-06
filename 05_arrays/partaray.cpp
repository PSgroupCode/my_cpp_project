/// sturcture variables as array elements
#include <iostream>

using namespace std;

const int SIZE =4;


struct part                                 //specify a structure
{
    int modelnumber;  
    int partnumber;
    float cost;


};

int main()
{
    int n;
    part apart[SIZE];                     //define array of structure

    for (n=0; n<SIZE; n++)                 // get values for all members
    {
        cout << endl;
        cout << "Enter model number :";
        cin >> apart[n].modelnumber;           // get  model number
        cout << "Enter part number: ";
        cin >> apart[n].partnumber;             // get part number
        cout << "Enter cost: ";
        cin>> apart[n].cost;                        //get cost
    }

    cout << endl;
    for (n=0; n<SIZE; n++)               //show values for all member
    {
        cout << "Model " << apart[n].modelnumber;
        cout << "part " << apart[n].partnumber;
        cout << "Cost  " << apart[n].cost << endl;
    }
    return 0;
}