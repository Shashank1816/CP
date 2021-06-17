#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cas=1;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int n1=(n/2)
        ;
        vector<long long int> vec;
        bool prime[n1+1];
        memset(prime,true,sizeof(prime));
        for(long long int p=2;p*p<=n1;p++)
        {
            if(prime[p]==true)
            {
                for(long long int i=p*p; i<=n1; i+=p)
                {
                    prime[i]=false;
                }
            }
        }
        for(long long int p=2;p<=n1;p++)
        {
            if(prime[p])
            {
                vec.push_back(p);//this vec containes all the prime numbers that are less than n1
            }
        }
        long long int len=vec.size();
        long long int pr;//product of 2 primes
        long long int ans;
        for(long long int x=len-1;x>=1;x--)
        {
            pr=((vec[x])*(vec[x-1]));
            if(pr<=n)
            {
                ans=pr;
                break;
            }
        }
        cout<<"Case #"<<cas<<": "<<ans;
        cas++;
        cout<<endl;
    }
}