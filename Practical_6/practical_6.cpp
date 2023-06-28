// write a program to implement function overloading. 
// create a class math operation that contain overloaded function for performing 
// mathematical operations. the overlaoded function should support addition , 
// subtraction , multiplication and division operate on varous types of data like integer and floating point 
// numbers 
// add overload
#include<iostream>

using namespace std;

class math
{
    private:
        int p;
        int q;
    public:
        math(){}
        math(int x , int y){
            this->p = x ;
            this->q = y;
        }
        int add( int a ,int b){
            return(a+b);
        }
        float add(float a , float b){
            return(a+b);
        }
        int sub(int a, int b){
            return(a-b);
        }
        float sub(float a , float b){
            return(a-b);
        }
        int multiply(int a , int b){
            return(a*b);
        }
        float multiply(float a, float b){
            return(a*b);
        }
        int div(int a, int b){
            return(a/b);
        }
        float div(float a, float b){
            return (a/b);
        }
};

int main()
{
    math m;
    cout<<m.add(2,3)<<endl;
    cout<<m.add(2.0f,3.0f)<<endl;
    cout<<m.sub(3,2)<<endl;
    cout<<m.sub(3.0f,2.0f)<<endl;
    cout<<m.multiply(2,3)<<endl;
    cout<<m.multiply(2.0f,3.0f)<<endl;
    cout<<m.div(2,3)<<endl;
    cout<<m.div(3.0f,2.0f)<<endl;

    return 0;
}

//Code by Steavo Babu                                                                                                                