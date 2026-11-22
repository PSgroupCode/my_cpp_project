// multiple inheritance with employees and degrees
#include <iostream>

using namespace std;
const int LEN =80; 

class student                                       //education background
    {
        private:
            char school[LEN];                   //name of school or university
            char degree [LEN];                   //highest degree earned
        public: 
            void getedu()
                {
                    cout << "   Enter name of school or university: ";
                    cin >> school;
                    cout  << "   Enter highest degree earned \n";
                    cout << "    (Highschool, Baachelor's, Master's, phD): ";
                    cin >> degree;
                    
                }
            void putedu () const 
                {
                    cout << "\n   School or university : " << school;
                    cout << "\n   Highest degree earned: " << degree;
                }

    };

class employee 
    {
        private:
            char naem [LEN];              //employee name
            unsigned long number;            //employee number
        public:
            void getdata () 
                {
                    cout << "\n   Enter last name: ";  cin >> name;
                    cout << "\n    Enter number :" ; cin >> number;
                }
            void putdata() const    
                {
                    cout << "\n  Name: " name;
                    cout << "\n  Number:" number;
                }
    } ;

class manager : private employee , private student              //management
    {
        private:
            char title[LEN];          //vice president 
            double dues;                   //golf club dues
        public:
            void getdata()
                {
                employee::getdata();
                cout << "    Enter tilte: ";        cin >> title;
                cout << "    Enter golf club dues : ";  cin >> dues;
                student :: getedu();
                }
            void putdata() const
                {
                    employee :: putdata();
                    cout << "\n    Title: " << tilte;
                    cout << "\n    Golf club dues: " << dues;
                    student :: putedu();
                }
    };

class scientist : private employee , private student          //scientist
    {
        private :
            int pubs;                              //number of publications
        public:
            void getdata()
                {
                    employee :: geatdata();
                    cout << "    Enter number of pubs: "; cin >> pubs;
                    student :: getedu();
                }
            void putdata() const
                {
                    employee :: putdata();
                    cout << "\n   Number of publications : " << pubs;
                    student :: putedu();
                }
    };

class laborer : public employee          
    {

    };
int main()
{
    manager m1;
    scientist s1,s2
    laborer l1;

    cout << endl;
    cout << "\n  Enter data for manager 1" ;                      //get data for
    m1.getdata();

    cout << "\nEnter data for scientist 1";
    s1.getdata();

    cout << "\n Enter data for scientist 2";
    s2.getdata();

    cout << "\n Enter data fo laborer 1";
    l1.getdata();

    cout << "\nData on manager 1";
    m1.putdata();

    cout << "\nData on  scientist 1";
    s1.putdata();

    cout << "\nData on scientist 2";
    s2.putdata()


    cout << "\nData on laborer 1";
    l1.putdata();
    cout << endl;
    return 0;
}