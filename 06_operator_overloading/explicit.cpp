//keyword explicit 
 #include <iostream>
 
 using namespace std;
 

 class Distance
    {
       private:
            const float MTF;                       //meters to feet
            int feet;
            float inches;
       public:
            Distance() : feet(0), inches(0.0), MTF(3.28083F)
                {    }
            explicit Distance(float meters ) : MTF(3.280833F)
                {
                    float fltfeet = MTF * meters;
                    feet = int(fltfeet);
                    inches = 12* (fltfeet-feet);
                } 
            void showdist()                     //display distance
                { cout << feet << "\'-" <<inches <<'\"';}
    };
 int main()
 {
     void fancyDist(Distance);       //declaraton
     Distance  dist1(2.35F);           //uses 1 arg constructor to 
                                      //convert meters to Distance
     //Distance dist1 =2.35F;         //error if ctor is explicit
     cout << '\ndist1 = '; dist1.showdist();

     float mtrs =3.0F;
     cout << "\ndist1 ";
     // fancyDist(mtrs);                     //error if ctor is explicit
     return 0;
 }

 void fancyDist (Distance d)
    {
        cout << "(in feet and inches) = ";
        d.showdist();
        cout <<endl;
    }