/* Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
track of the number of cars that have gone by, and of the total amount of money collected.

Model this tollbooth with a class called tollBooth. The two data items are a type
unsigned int to hold the total number of cars, and a type double to hold the total amount
of money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 0.50 to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const.*/

#include <iostream>

using namespace std;


class tollbooth 
{
    private:
        unsigned int totalNomber_of_car ;
        double  totalAmount_of_money;

    public:
        tollbooth():totalNomber_of_car(0),totalAmount_of_money(0)      // constructor no arg
        {  }

    void payingCar()                                                // add 50 cent every car
    {     
        cout << "please, give 50 cent"  <<endl;                          //and increase number 
        totalAmount_of_money = totalAmount_of_money + .50;            // of cars
        totalNomber_of_car++;
    }

    void nopayCar()
    {
        totalNomber_of_car++;                           // increase only number of car
    }

    void display()const
    {
        cout << "total amount is: " <<totalAmount_of_money;
        cout << "\ntotal cars is: " << totalNomber_of_car;
    }

};

int main()
{
    tollbooth cars;
    
    
    cout<<"hello, passing bridge ,are you pay or not pay this vehicle \n and if you want stop booth click s";
        char ch;
        
    
    
    while(1)
    {
        cout << "\nEnter p or n or s " ; cin >> ch;
        
        switch (ch)
        {
        
        
            case 'p':
            {
                cars.payingCar();
                cout << "thanks for kindness."<<endl;
                break;
            }
            case 'n':
            {
                cars.nopayCar();
                break;
            }
            case 's':
            {
                cars.display();
                cout << "\nthanks for today works. goodnight "<<endl;
                break;
            }
        }

    }
    return 0;
}