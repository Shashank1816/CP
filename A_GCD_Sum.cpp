#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
long long int sumof(long long int n)
{
    long long int s=0;
    int d;
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;  
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int sum;
        
        long long int ans=0;
        long long int gc;
        do {
            sum=sumof(n);
            gc=gcd(n,sum);
            if(gc>1)
            {
                ans=n;
                break;
            }
            else{
                n++;
            }

        }while(true);
        cout<<ans<<endl;
        
        
    }
    return 0;
}