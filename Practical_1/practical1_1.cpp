#include<iostream>

using namespace std;

class room {
    public:
    int length,breadth;

    void set_details(int l,int b)
    {
        length=l;
        breadth=b;
    }

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main(){

    int n,l,b,i,area=0,perimeter=0;
    cout<<"Enter the number of rooms:"<<endl;
    cin>>n;
    room r[n];
    for(i=0;i<n;i++){

        cout<<"Enter the length and breadth of a room";
        cin>>l>>b;
        r[i].set_details(l,b);
    }
    cout<<"\nArea and perimetre of each room is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Area of a room = "<<r[i].area()<<endl;
        cout<<"perimetre of a room = "<<r[i].perimeter()<<endl;
    }
    
    for(i=0;i<n;i++)
    {
        area = area+r[i].area();
        perimeter = perimeter + r[i].perimeter();
    }
    cout<<"The total area of the rooms is "<<area<<endl;
    cout<<"The total perimeter of the room is "<<perimeter<<endl;

    return 0;
}