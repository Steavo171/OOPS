#include<iostream>

#include<string.h>

using namespace std;

class req;

class org{
    private:
        int emp_id;
        string name;
        int salary;

    public:

        org(){}

        org(int id,string n,int s){
            emp_id=id;
            name=n;
            salary=s;
        }

        void read_data(){
            cout<<"E-ID = ";
            cin>>emp_id;
            cout<<"Name = ";
            cin>>name;
            cout<<"Salary = ";
            cin>>salary;
            cout<<endl;
        }

        void display(){
            cout<<emp_id<<" | "<<name<<" | "<<salary<<endl;   
           
        }

        friend void tax(org& );         //friend function 

};


void tax(org& o){
            

        if (o.salary<300000){
            cout<<"No Tax Needed"<<endl;
        }            
        else if (o.salary>=300000 && o.salary<600000)
        {
            int y;
            y= (o.salary-300000)*0.05;
            cout<<"Tax to be paid : "<<y<<endl;
        }
        else if (o.salary>=600000){
            int y;
            y= 12500+(o.salary-600000)*0.2;
            cout<<"Tax to be paid : "<<y<<endl;
        }
            
}



int main()
{
    org o;
    int n;

        cout<<"Enter no. of employees :";
        cin>>n;

        for(int i=0;i<n;i++){
            org o[i];
        }

    for(int i=0;i<n;i++){
        cout<<endl;
        cout<<"Employee "<<i+1<<endl;
        o.read_data();
        o.display();
        tax(o);
    }


    return 0;
}

//Code by Steavo Babu