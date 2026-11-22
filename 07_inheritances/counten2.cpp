//constructors in derived class 
#include <iostream>

using namespace std;


class Counter
    {
        protected:                                     //not private
            unsigned int count;
        public:
            Counter () : count()                     //constructro no args
                {  }
            Counter ( int c) : count(c) 
                {   }
            unsigned int get_count( ) const            //return count (prefix  )
              { return count ;} 
            Counter operator ++ ()                      //incr count (prefix)
                {return Counter (++count) ;}
            
            
    };

class CountDn : public Counter 
    {
        public:
            CountDn() : Counter()                            //constructor, no arg
                {   }
            CountDn(int c) : Counter(c)                       //constructor 1 arg
                {   }
            CountDn operator -- ()
                { return CountDn(--count);}
            
    };

int main()
{
    CountDn c1;                                                
    CountDn c2(100);  
    
    cout << "\nc1="<<c1.get_count();
    cout << "\nc1="<<c2.get_count();                       //display

    ++c1; ++c1; ++c1;                  //increament c1
    cout << "\nc1=" << c1.get_count();                         //display it 

    --c2; --c2;                                              //decrement c2
    cout << "\nc2=" << c2.get_count();

    CountDn c3 = --c2;                                    //create c3 from c2
    cout << "\nc3="<< c3.get_count();                   //display c3
    cout << endl;

    return 0;
}