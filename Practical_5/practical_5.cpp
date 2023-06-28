#include<iostream>
using namespace std;    
class distance_object{
        float feet;
        float inches;
        public:
        distance_object()
        {
            feet=0;
            inches=0;
        }
        distance_object(float f,float i)
        {
            feet=f;
            inches=i;
        }
        distance_object(distance_object &a)//copy constructor
        {
            feet=a.feet;
            inches=a.inches;
        }
        void operator = (distance_object &a)//assignment overload
        {
            feet=a.feet;
            inches=a.inches;
        }
        float add(distance_object a,distance_object b)
        {
            return(a.feet+b.feet+(a.inches+b.inches)/12);
        }

        float sub(distance_object a,distance_object b)
        {
            return(a.feet-b.feet-(a.inches-b.inches)/12);
        }
};

int main()
{
    distance_object b1(9,11);
    distance_object b2=b1;
    distance_object b3;
    distance_object b4(20,11);
    b3=b2;
    cout<<"sum in feet is "<<b3.add(b3,b2)<<endl;
    cout<<"Difference in feet is "<<b3.sub(b4,b1)<<endl;

}

//Code by Steavo Babi