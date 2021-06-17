#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        long int inc=0;//increase constant
        for(int x=0;x<n;x++)
        {
            cin>>a[x];
            if(a[x]>a[x-1] && inc==0)
            {
                inc=a[x]-a[x-1];
            }
        }
        bool ans=true;
        for(int x=1;x<n;x++)
        {
            if(a[x]>a[x-1])
            {
                if((a[x]-a[x-1])!=inc)
                {
                    ans=false;
                    break;
                }
            }
        }
        if(a[1]<a[0])
        {
            ans=false;
        }
        if(ans==true)
        {
            
        }

    }

}