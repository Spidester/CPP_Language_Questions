#include <iostream>
using namespace std;

class Bank_Account
{
    public:
    
    char name[20];
    int accno;
    int bal=1000;
    int flag=0;
    
    void deposit()
    {
        int add;
        cout<<"Enter Amount to add- ";
        cin>>add;
        
        bal=bal+add;
        
        cout<<"Amount added successfully. Your new balance is "<<bal<<"\n";
    }
    void withdraw()
    {
        int sub;
        cout<<"Enter Amount to withdraw- ";
        cin>>sub;
        
        if(sub<=bal)
        {
            bal=bal-sub;
            
            cout<<"Amount withdrawn successfully. Your new balance is "<<bal<<"\n";
        }
        else
        {
            cout<<"Insufficient Balance. \n";
            flag=1;
        }
    }
    void display()
    {
        cout<<"Name- "<<name<<"\nAccount Number- "<<accno<<"\nBalance- "<<bal;
    }
};

int main()
{
    Bank_Account b;
    int c;
    
    cout<<"Enter Name- ";
    cin>>b.name;
    cout<<"Enter Account Number- ";
    cin>>b.accno;
    
    for(int i=0; i<10; i++)
    {
        cout<<"\nTo Deposit Press 1, To Withdraw Press 2, To Display Press 3, To Exit Press 4.\n";
        cin>>c;
        if(c==1)
        {
            b.deposit();
        }
        if(c==2)
        {
            b.withdraw();
        }
        if(c==3)
        {
            b.display();
        }
        if(c==4)
        {
            cout<<"-----EXIT-----";
            break;
        }
        if(b.flag==1)
        {
            break;
        }
    }
    
    return 0;
}