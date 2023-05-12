#include<iostream>

using namespace std;

class Complex{
    float real,imaginary;

    public:
    Complex(){

    } 
    
    Complex(float r, float i){ 

        real = r;
        imaginary = i;

    }
    void add(Complex x, Complex y){

        real = x.real + y.real;
        imaginary = x.imaginary + y.imaginary;
        cout << "\nSum :" << real << " + " << imaginary << "i\n";
    }
    void multiply(Complex x, Complex y){

        real = (x.real * y.real) - (x.imaginary * y.imaginary);
        imaginary = (x.real * y.imaginary) + (y.real * x.imaginary);
        cout << "\nMultiply :" << real << " + " << imaginary << "i\n";
    }
    
    void diff(Complex x, Complex y){
        real = x.real - y.real;
        imaginary = x.imaginary - y.imaginary;
        cout << "\nDiffrence :" << real << " + " << imaginary << "i\n";
    }

};

int main(){
    Complex x,y,z;
    x = Complex(2,3);
    y = Complex(4,5);
    z.add(x,y);
    z.multiply(x,y);
    z.diff(x,y);
    return 0;
}

//Code by Steavo Babu