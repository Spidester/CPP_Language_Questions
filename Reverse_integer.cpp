#include<iostream>
using namespace std;

class Solution {
public:
    int x;

    int reverse()
    {
        long r=0,n=0;
        
        while(x!=0)
        {
            r=x%10;
            n=n*10+r;
            x=x/10;
        }     
        return n;
    }
};

int main()
{
     Solution s;
     cout<<"Enter Integer- ";
     cin>>s.x;
     cout<<"Reverse Integer- "<<s.reverse();

     return 0;
}
