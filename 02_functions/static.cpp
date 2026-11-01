// domonstrates static variable
#include <iostream>

using namespace std;

float getavg(float);             //declaration

int main()
{
    float data =1,avg;
    while (data!=0)
    {
        cout <<"Enter a number: ";
        cin >> data;
        avg = getavg(data);
        cout << "New average is "<< avg << endl;
        
    }
    return 0;
}

// finds average of old plus new data
float getavg (float newdata)
{
    static float total = 0 ;            //static initialize are initialize
    static int count = 0;               // only once program

    count++;                            //increment count;
    total += newdata;
    cout << "total number :"<< count<<endl;                    //add new data to tatal
    return total /count;                  // return the new average
}
