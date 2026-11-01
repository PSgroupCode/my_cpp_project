// Write a function called circarea() that finds the area of a circle 
#include <iostream>

using namespace std;

float circarea( float);           //function prototype

int main()
{
    float radius;
    cout << "Enter the radius of circle: ";  cin >> radius;
    cout <<"Area of circle is: "<< circarea(radius)<<endl;
    return 0;
}

float circarea(float R)                         //function definition
{
    const float pi = 3.14;
    
    int area = pi * R*R;
    return area;
}