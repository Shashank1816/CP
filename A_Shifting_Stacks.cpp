#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        //last wale me n height ka hona chahiye 
        long long int ar[n];
        for(long long int x=0;x<n;x++)
        {
            cin>>ar[x];
        }
        long long int rem=0;//remaining stacks ko agle me add karna hai 
        //har index par mininmum index ke baraabar stack chahiye 
        int flag=0;//matlab "NO" not possible
        long long int curr=0;//current height
        for(long long int x=0;x<n;x++)
        {
            curr=curr+ar[x];
            if(curr<x)
            {
                flag=-1;//not possible
                break;
            }
            else
            {
                curr=curr-x;
            }
        }
        
        if(flag==-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}