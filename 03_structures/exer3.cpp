/*Write a program that uses a structure called point to model a point. Define three points,
and have the user input values to two of them. Then set the third point equal to the sum
of the other two, and display the value of the new point */

#include <iostream>
using namespace std;

struct point                               // define structure 
{
    int horizontal ;
    int vertical;
};

int main()
{
    point p1, p2,p3;
    
    cout << "Enter coordinate for p1: "; cin >>p1.horizontal >> p1.vertical;
    
    cout << "Enter coordinate for p2: "; cin >> p2.horizontal >>p2.vertical;
    
    p3.horizontal= p1.horizontal + p2.horizontal;
    p3.vertical = p1.vertical + p2.vertical;
    cout <<"coordinates of p1+p2 are: " << p3.horizontal<<","<<p3.vertical<<endl;
    return 0;

}