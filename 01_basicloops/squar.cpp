// squre.cpp using sqrt() function
#include <iostream>
#include <cmath> // or math.h
int main() 
{
    using namespace std;

    double area;
    cout <<" Enter the floor area ,in square feet, of your home:";
    cin  >> area;
    double side;
    side = sqrt(area);
    cout << "that's the equivalent of a squre " << side
    << " feet to the side " << endl;
    cout << "How facinating!" << endl;
    return 0; 
}
