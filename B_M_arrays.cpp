#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        vector<long long int > a;
        long long int enter;
        long long int sum=0;
        for(long long int x=0;x<n;x++)
        {
            cin>>enter;
            a.push_back(enter);
            sum+=enter;
        }
        long long int ans;
        long long int rem;
        if(sum%m==0)
        {
            ans=1;//us puri array ko hi m-divisible array bol sakte hain 
        }
        else
        {

        }
    }
}