#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int r,c,x;
        cin>>r>>c>>x;
        long long int xr=x%r;
        if(xr==0)
        {
            xr=r;
        }
        long double xc=x/(double)r;
        long long int xci=x/r;
        if(xci!=xc)
        {
            xc=xci+1;
        }

        long long int ans;
        ans=((xr-1)*c)+xc;
        cout<<ans<<endl;

    }
    return 0;
}