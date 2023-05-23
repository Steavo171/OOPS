#include<iostream>
#include<string.h>

using namespace std;

class student{
    private:
        int roll_no;
        char name[20];
        int marks;
    public:
        void set_details(int val,int v, char s[])
        {
            marks=val;
            roll_no=v;
            strcpy(name,s);
        }
        int getmarks()
        {
            return marks;
        }
        int getroll_no()
        {
            return roll_no;
        }
        string getname()
        {
            return name;
        }
       
};

float percentage(student arr[]){
    int sum=0;
    for(int i=0;i<3;i++){
        sum=sum+arr[i].getmarks();
    }
    float per;
    per=(sum/(3*100))*100;
    return per;
}

int avg(student arr[]){
    int sum=0;
    for(int i=0;i<3;i++){
        sum=sum+arr[i].getmarks();
    }
    float avg;
    avg=sum/3;
    return avg;
}


    
int main()
{
    student st[3];
    char n[100];
    int m,r,i;
    for(i=0;i<3;i++){
        cout<<"Enter your name,roll_no,marks ";
        cin>>n>>r>>m;
        st[i].set_details(m,r,n);
    }
    int topper_index=0;
    int topper = 0;
    topper = st[0].getmarks();
    for(int i=0;i<3-1;i++){         // 3-1 refers to n-1 where n is the number of students
    
        if(topper<st[i+1].getmarks()){
            topper = st[i+1].getmarks();
            topper_index = i+1;
        }

    }

    cout<<"The average marks of the class is "<<avg(st)<<endl;
    cout<<"\n\nTopper marks is: "<<topper;
    cout<<"\nTopper name is: "<<st[topper_index].getname();
    return 0;
    
}

//Code by Steavo Babu