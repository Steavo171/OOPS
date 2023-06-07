#include <iostream>
using namespace std;
 
class Parent
{
public:
    // constructor
    Parent()
    {
        cout<<"Constructor called"<<endl;
    }
    
    // destructor
    ~Parent()
    {
        cout<<"Destructor called"<<endl;
    }
};
 
int main()
{
    Parent p1;   // Constructor Called
    int a = 1;
    if(a==1)
    {
        Parent p2;  // Constructor Called
    }  // Destructor Called for z2
} 

//Code by Steavo Babu