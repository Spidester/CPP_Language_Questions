#include<iostream>
using namespace std;

class Solution {
public:
    int nums[1000];
    int n, target;

    int threeSumClosest() {
        int ans=0, sum=0, diff=0, min=10000;
        for(int k=2; k<n; k++)
        {
            for(int j=1; j<k; j++)
            {
                for(int i=0; i<j; i++)
                {
                    sum = nums[i] + nums[j] + nums[k];
                    if(sum<target)
                    {
                        diff= target - sum;
                    }
                    if(sum>=target)
                    {
                        diff=sum - target;
                    }
                    if(diff< min)
                    {
                        min=diff;
                        ans=sum;
                    }
                }
            }
        }
        return(ans);
    }
};

int main()
{
    Solution t;

    cout<<"Enter Amount of Numbers- ";
    cin>>t.n;
    for(int m=0; m<t.n; m++)
    {
        cout<<"Enter Number- ";
        cin>>t.nums[m];
    }
    cout<<"Enter Target- ";
    cin>>t.target;
    cout<<"Answer- "<<t.threeSumClosest();

    return 0;
}