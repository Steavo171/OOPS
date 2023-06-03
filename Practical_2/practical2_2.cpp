#include<iostream>
#include<math.h>
using namespace std;

class Triangle{
    int height=0, base=0;
    float side;

    public:
    Triangle(){ 
  
    } 

    Triangle(int h, int b){ 
        height = h;
        base = b;
    }
    float area(){
        return (0.5*height*base);
    }
    float perimeter(){
        side = pow((pow(height,2) + pow(base,2)),0.5);
        return (side + height + base);
    }
    ~Triangle(){

    }
};

int main(){

    Triangle t(10,50);
    cout<< "\narea = " <<t.area();
    cout<< "\nperimeter = " <<t.perimeter();

    cout << "\n";
}

//Code by Steavo Babu