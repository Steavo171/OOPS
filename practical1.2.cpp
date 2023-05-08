#include<iostream>

using namespace std;

class circle{
    private:
        int radius;
    public:
        void setradius(int r)
        {
            radius=r;
        }
        float area()
        {
            return 3.14*radius*radius;
        }

        float perimeter()
        {
            return 2*3.14*radius;
        }
};

int main()
{
    circle c;
    c.setradius(5);
    cout<<"The area of circle is "<<c.area()<<endl;
    cout<<"The perimeter of the circle is "<<c.perimeter();
    return 0;
}

//Code by Steavo Babu