#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int c0=0,c1=0,c2=0;
        for(int x=0;x<n;x++)
        {
            cin>>a[x];
            if(a[x]%3==0)
            {
                c0++;
            }
            else if(a[x]%3==1)
            {   
                c1++;
            }
            else if (a[x]%3==2)
            {
                c2++;
            }
        }
        //c2 wale element me +1 karenge toh c0 badega 
        //c1 wale elemnt me +1 karenge toh c2 badhega
        //c0 wale element me +1 karenge toh c1 badega
        int count=0;
        while(c1!=c2 && c2!=c0)
        {
            if(c0>c1)
            {
                c0--;
                c1++;
                count++;
            }
            if(c1>c2)
            {
                c1--;
                c2++;
                count++;
            }
            if(c2>c0)
            {
                c2--;
                c0++;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}