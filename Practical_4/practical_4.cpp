//PRACTICAL 4 
//Program to implement Inheritance
// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class Account{
    protected:
    int acc_no,bal;
    string name;
    public:
    Account(){
        acc_no=0;
        bal=0;
        name="xyz";
    }
    Account(int account_no,int balance,string n){
        acc_no=account_no;
        bal=balance;
        name=n;
    }
    void Deposit(){
        int temp;
        cout<<"Enter deposit amount : ";
        cin>>temp;
        bal=bal+temp;
    }
    void Withdraw(){
        int temp;
        cout<<"Enter withdrawal amount : ";
        cin>>temp;
        bal=bal-temp;
    }
    void Display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Account no. : "<<acc_no<<endl;
        cout<<"Balance : "<<bal<<endl;
    }
};

class Savings : public Account{
    protected:
    int S_bal;
    public:
    Savings(int account_no,int balance,string n){
        acc_no=account_no;
        bal=balance;
        name=n;
    }
    int S_balance(){
        S_bal=bal+(bal*0.03);
        return S_bal;
    }
    void S_Display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Account no. : "<<acc_no<<endl;
        //cout<<"Balance : "<<bal<<endl;
        cout<<"Savings Balance : "<<S_bal<<endl;
    }
};

class Current : public Account{
    protected:
    int C_bal;
    public:
    Current(int account_no,int balance,string n){
        acc_no=account_no;
        bal=balance;
        name=n;
    }
    int C_balance(){
        C_bal=bal;
        return C_bal;
    }
    void C_Display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Account no. : "<<acc_no<<endl;
        // cout<<"Balance : "<<bal<<endl;
        cout<<"Current Balance : "<<C_bal<<endl;
    }
};

class Credit_Card : public Account{
    protected:
    int CC_bal;
    public:
    Credit_Card(int account_no,int balance,string n){
        acc_no=account_no;
        bal=balance;
        name=n;
    }
    int CC_balance(){
        CC_bal=bal-(bal*0.025);
        return CC_bal;
    }
    void CC_Display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Account no. : "<<acc_no<<endl;
        //cout<<"Balance : "<<bal<<endl;
        cout<<"Credit Card Balance : "<<CC_bal<<endl;
    }
};

int main(){
    int choice;
    string name;
    cout<<"Enter Name : ";
    cin>>name;
    int acc_no,bal;
    cout<<"Enter Account Number : ";
    cin>>acc_no;
    cout<<"Enter Balance : ";
    cin>>bal;
    Current c1(acc_no,bal,name);
    Savings s1(acc_no,bal,name);
    Credit_Card cc1(acc_no,bal,name);
    cout<<"CHOICES : "<<endl;
    cout<<"1.Display Current Balance"<<endl;
    cout<<"2.Display Savings Balance"<<endl;
    cout<<"3.Display Credit Card Balance"<<endl;
    cout<<"4.Deposit in Current Balance"<<endl;
    cout<<"5.Deposit in Savings Balance"<<endl;
    cout<<"6.Deposit in Credit Card Balance"<<endl;
    cout<<"7.Withdraw from Current Balance"<<endl;
    cout<<"8.Withdraw from Savings Balance"<<endl;
    cout<<"9.Withdraw from Credit Card Balance"<<endl;
    while(1){
        cout<<" "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            c1.C_balance();
            c1.C_Display();
            break;
            
            case 2:
            s1.S_balance();
            s1.S_Display();
            break;
            
            case 3:
            cc1.CC_balance();
            cc1.CC_Display();
            break;
            
            case 4:
            c1.Deposit();
            c1.C_balance();
            c1.C_Display();
            break;
            
            case 5:
            s1.Deposit();
            s1.S_balance();
            s1.S_Display();
            break;
            
            case 6:
            cc1.Deposit();
            cc1.CC_balance();
            cc1.CC_Display();
            break;
            
            case 7:
            c1.Withdraw();
            c1.C_balance();
            c1.C_Display();
            break;
            
            case 8:
            s1.Withdraw();
            s1.S_balance();
            s1.S_Display();
            break;
            
            case 9:
            cc1.Withdraw();
            cc1.CC_balance();
            cc1.CC_Display();
            break;
            
            case 10:
            return 0;
            
            default:
            cout<<"Please Enter The Correct Choice !!"<<endl;
            break;
        }
    }
}

//Code by Steavo Babu