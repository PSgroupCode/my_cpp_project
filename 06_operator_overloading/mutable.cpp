// const ==> solution mutable
#include <iostream>
#include <string>
using namespace std;


class scrollbar
    {
        private:
            int size;                         //related to constness
            mutable string owner;             // not relevant to constness
        public:
            scrollbar(int SZ, string own) : size(SZ) ,owner(own)
                {    }
            void setSize (int SZ)            //changes size
                {size =SZ;}
            void setOwner(string own)  const           //changes owner
                {owner =own;}
            int getSize() const                //returns size
                { return size;}
            string getOwner() const           //returns owner
                {return owner;}

    };
int main()
{
    const scrollbar sbar (60, "Window1");

    // sbar .setSize(100);           //can't do this to const obj
    sbar.setOwner("Window2");          //this is OK

    cout << sbar.getSize() << ", " <<sbar.getOwner() << endl;
    return 0;
}