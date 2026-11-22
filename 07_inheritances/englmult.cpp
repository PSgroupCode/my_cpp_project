//multiple inheritance with english Distances
#include <iostream>
#include <string>
using namespace std;



class Type                                    //type of lumber
    {
        private:
            string dimensions;
            string grade;
        public:
            type () : dimensions("N/A"), grade ("N/A")  //no arg constructors
                {   }
            
            type (string di , string gr)  :  dimentions(di) , grade(gr)
                {   }                            //two arg constructor
            void gettype()                       //get type from user
                {
                    cout << "  Enter nominal dimesion ( 2x4 etc.); ";
                    cin >> dimensions;
                    cout << "  Enter grade (rough , const , etc.): ";
                    cin >> grade;
                }
            void showtype () const                      //display type
                {
                    cout << "\n     Dimensions :" << dimensions;
                    cout << "\n     Grade: "  << grade;
                }

    };

class Distance 
    {
        private:
            int feet :
            float inches;
        public:
            Distance() : feet (0), inches(0)    //no arg constructor
                {   }
            Distance (int ft, float in) : feet(ft), inches(in )  //two arg constructor
                {   }
            void getdist()                       //get lenght from user
                {
                    cout << "    Enter feet: "; cin >> feet;
                    cout << "     Enter inches: "; cin >> inches;
                }

            void showdist () const               //displa6y distance
                { cout << feet << "\' -" << inches << '\"';}
    };

class Lumber : public Type, public Distance
    {
        private:
            int quantity ;               //number of pieces
            double price;                 //price of each piece
        public:
            Lumber() : Type(), Distance(), quantity(0), price(0.0)
                {    }
            Lumber( string di , string gr, int ft , float in, int qu,           //constaructor ( 6 args)
                        float prc): Type(di,gr),Distance(ft,in),  quantity(qu), price(prc) // args for type distance 
                            {    }
            void  getlumber() 
                {
                    Type :: gettype ();
                    Distance :: getdistf();
                    cout << "  Enter quantity ";   cin >> quantity;
                    cout << "   Enter price per piece :" ; cin >> price;
                }

            void showlumber() cosnt
                {
                    Type :: showtype();
                    cout << "\n   Length: ";
                    Distance :: showdist();
                    cout << "\n  price for " << quantity
                        <<"pieces : $" << price * quantity;
                }
    };
int main()
{
    Lumber siding ;                     //constructor  no arg
    
    cout << "\nSiding data: \n";
    siding.getlumber();                           //get siding from user 

    Lumber studs ( "2x4," "const", 8, 0.0, 200, 4.45F);

    cout << "\nSiding";      siding .showlumber();
    cout << "\nStuds";       studs.showlumber();
    cout << endl;
    return 0;
}