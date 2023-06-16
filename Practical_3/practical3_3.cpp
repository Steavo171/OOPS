// Sample friend function

#include<iostream>

using namespace std;

class rectangle
{
    private:
        int len , bre;
    public:
        rectangle(int l, int b){
            len=l;
            bre=b;
        }

        friend int area(rectangle&);
};                                                             
int area(rectangle& r){
    return((r.len)*(r.bre));
}

int main(){

    rectangle r(10,50);
    cout<<"The area is "<<area(r);
    return 0;
}

//Code by Steavo Babu