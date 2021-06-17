#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;//lengths of strings a and b
        string a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"YES"<<endl;
        }
        else if((n%2==1) && (a[n-1]!=b[n-1]))//odd string me last character alag hogaya toh nahi ho paaega same kabhi bhi 
        {
           cout<<"NO"<<endl;
        }
        else
        {
            if(n%2==1)
            {
                n=n-1;
            }
            int x=n-1;
            int flag=1;
            while(x>=1)
            {
                if(a[x]==b[x] && a[x-1]==b[x-1])
                {   
                    x=x-2;
                }
                else if(a[x]!=b[x] && a[x-1]!=b[x-1])
                {
                    //count whether 1 and 0 are equal
                   
                    x=x-2;
                }
                else{
                    flag=-1;
                    break;
                }
                
            }
            if(flag==1)
            {
                cout<<"YES"<<endl;
            }
            else if(flag==-1)
            {
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
