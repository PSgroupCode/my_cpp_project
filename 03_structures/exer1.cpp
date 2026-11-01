/* Write a structure specification that includes three variables—all of type int—called hrs,
mins, and secs. Call this structure time.  */

#include <iostream>
using namespace std;

struct TIME                              //define structure
{
    int hours;                           // these are member of structure
    int minute;
    int seconds;
};

int main()
{
   TIME time1;                   //define structure variable 
   TIME time2 ={11, 10, 59};     // initialize the structure variable

   time1.hours =6;
   time1.minute =56;
   time1.seconds = 30;
   
   cout << "time is : "<< time1.hours <<":"<<time1.minute << ":"<<time1.seconds << endl;
   cout << "I have time in second: " << time2.seconds << " sec";
  
   cout <<endl;

    return 0;
}