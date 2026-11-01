#include <iostream>

int c = 45;  // gloable variable

int main(){
    int a,b,c;
    std::cout << "Enter the  value of a:" << std::endl;
    std::cin >> a;
    std::cout << "Enter the value of b: " << std::endl;
    std::cin >> b;
    c = a+b;
    std:: cout <<"the sum is " << c << std::endl;
    std::cout << "the globle c is"<< ::c << std::endl;   //scope resolution 

    return 0;
}