#include<iostream>

using namespace std;

class distance2;

class distance1
{
    public:
        int meters,centimeters;

        distance1(){}
        distance1(int m ,int cm)
        {
            meters=m;
            centimeters=cm;
        }
        void read_data()
        {
            cout<<"Enter meter value:";
            cin>>meters;
            cout<<"Enter centimeter value:";
            cin>>centimeters;
        }

        void display()
        {
            cout<<"The distance is  :  "<< meters<<"meters and "<<centimeters<<" centimeters"<<endl;

        }

    friend distance2 add_distance_2(distance1 d1, distance2 d2);
};

class distance2 
{
    public:
        int feet;
        int inches;

        distance2(){}
        distance2(int f, int i){
            feet=f;
            inches=i;
        }
        
        void read_data() {
            cout<<"Enter feet value:";
            cin>>feet;
            cout<<"Enter inches value:";
            cin>>inches;
        }   
    
        void display() {
            cout<<"The distance is  : "<<feet<<" feet and "<<inches<<" inches"<<endl;
        }
    
        friend distance1 add_distance(distance1 d1, distance2 d2);      
};

distance1 add_distance(distance1 d1, distance2 d2) {
    distance1 result;
    int total_centimeters_d1 = d1.meters*100 + d1.centimeters;
    int total_inches_d2 = d2.feet*12 + d2.inches;
    int total_centimeters = total_centimeters_d1 + total_inches_d2*2.54;
    
    result.meters = total_centimeters / 100;
    result.centimeters = total_centimeters % 100;
    
    return result;
}

distance2 add_distance_2(distance1 d1 , distance2 d2){

    distance2 result1;
    int total_inches_d2 = d2.feet*12 + d2.inches;
    int total_centimeters_d1 = d1.meters*100 + d1.centimeters;
    int total_inches = total_inches_d2 + int(total_centimeters_d1/2.54);

    result1.feet = total_inches / 12;
    result1.inches = total_inches % 12;
    
    return result1;
}

int main()
{

    distance1 d1;
    distance2 d2;
    
    cout<<"Enter the first distance (in meters and centimeters):"<<endl;
    d1.read_data();
    
    cout<<"Enter the second distance (in feet and inches):"<<endl;
    d2.read_data();
    
    distance1 sum = add_distance(d1, d2);
    distance2 sum1 = add_distance_2(d1,d2);

    cout<<"Sum of distances:";
    sum.display();
    sum1.display();

    return 0;
}

//Code by Steavo Babu