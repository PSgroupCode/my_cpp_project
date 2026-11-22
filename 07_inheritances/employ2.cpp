// Multiple levels of inheritace
#include <iostream>

using namespace std;
const int LEN =80;                                     ///

class employee
    {
        private: 
            char name[LEN];                               //employee name
            unsigned long number;                      //employeee number
        public:
            void getdata()
                {
                    cout << "\n    Enter last name ";      cin >> name;
                    cout << "     Enter number: " ;         cin >> number;

                }
            void putdata() const 
                {
                    cout << "\n     Name: " << name;
                    cout << "\n     Number: " << number;
                }
            
    };

class manager : public employee                          //manger class
    {
        private: 
            char title[LEN];                             //"vice president" etc.
            double dues;                                //golf club dues
        public:
            void getdata ()
                {
                    employee :: geatdata();  
                    cout << "     Enter title: ";           cin >> title;
                    cout << "      Enter golf club dues; ";  cin >> dues;
                }
            void putdata() const 
                {
                    employee :: putdata() ;
                    cout << "\n    Title: " << title;
                    cout << "\n     Golf cluv dues: " << dues;
                }
    };

class scientist : public employee                            //scientist class 
    {
        private: 
            int pubs;
        public:                                         // number of publication
            void getdata() 
                {
                    employee :: getdata();
                    cout << "    Enter number of pubs: "; cin >> pubs;
                }
            void putdata () cosnt 
                {
                    employee :: putdata() ;
                    cout << "  \n     Number of jpublications: " << pubs;
                }

    };

    class laborer : public emplyee                        //laborer class
        {

        };
    
    class foreman : public laborer                        //foreman class 
        {
            private:
                float quotas;                            //percent of quotas met successfully
            public:
                void getdata()
                    {
                        laborer :; getdata() ;
                        cout << "   Enter  quotas :  ";  cin >> quotas
                    }
                void putdata() const 
                    {
                        laborer :: putdata ();
                        cout << " \n     quotas:  " <<quotas;
                    }
        };

int main()
{
    laborer l1;
    foreman;

    cout << endl;
    cout << "\n Enter data for laborer 1";
    l1.geatdata();
    cout << "\nEnnter data for foreman 1 ";
    f1.getdata();

    cout << endl;
    cout << "\nData on laborer 1";
    l1.putdata();
    cout << " \nData on foreman 1";
    f1.putdata();
    cout << endl;
    
    return 0;
}