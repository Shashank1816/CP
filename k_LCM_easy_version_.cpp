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
        long long int k;
        cin>>k;
        long long nb=n/2;
        if(n%2==1)
        {
            cout<<1<<" "<<(n/2)<<" "<<(n/2);
        }
        else if(n%2==0)
        {
            if(nb%2==0)
            {
                cout<<(n/2)<<" "<<(n/4)<<" "<<(n/4);
            }
            else
            {
                cout<<2<<" "<<(nb-1)<<" "<<(nb-1);
            }
            
        }
        cout<<endl;
    }
    return 0;
}