/* a dinner party for six guests, but your table seats only four. In how
many ways can four of the six guests arrange themselves at the table? */
#include <iostream>
using namespace std;

int main()
{
    int guest;
    int chair;
    int total_way=1;
    cout << "Enter your number of guest: "; cin >> guest;
    cout << "Enter your number of chair: " ; cin >> chair;
    for (int i = 1; i<=chair; i++)
    { 
        if (guest>0)
        {
        total_way = guest *total_way;
        guest=guest-1;
        }
   }
   cout << total_way <<endl;
   return 0;
}