/* 
Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.
*/
#include <iostream>

using namespace std;

struct employee
{
   int employee_number;
   float employee_compensation;
};

int main()
{
    employee employee1, employee2, employee3;                     // sturcture variable 
    for (int i=1; i<=3; i++)                                   // this loop get employee data 1 to 3
    {
        cout << "Enter the employee"<<i<< " number:"<<endl; 
        cout << "Enter the employee" <<i<<" compensation:"<< endl;
        if (i==1)
        {
            cin >> employee1.employee_number;
            cin >>  employee1.employee_compensation;
        }
        else if (i==2)
        {
            cin >> employee2.employee_number;
            cin >> employee1.employee_compensation;
        }
        else if (i==3)
        {
            cin >> employee3.employee_number;
            cin >> employee3.employee_compensation;
        }
    }
    cout << "employee1 number:"<< employee1.employee_number << endl;
    cout << "employee1 compensation:" <<employee1.employee_compensation<<endl  ;
    cout << "employee2 number:" <<employee2.employee_number <<endl ;
    cout << "employee2 compensation:"<< employee2.employee_compensation<<endl;
    cout << "employee3 number: " <<employee3.employee_number<<endl;
    cout << "employee3 compensation: " <<employee3.employee_compensation<<endl;
    return 0;
}