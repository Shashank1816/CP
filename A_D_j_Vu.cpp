#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        int ca=0;//count of a
        for(int x=0;x<len;x++)
        {
            if(s[x]=='a')
            {
                ca++;
            }
        }
        if(ca==len)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int ind;//jis index par a nahi hai uske opp me a daal do 
            for(int x=0;x<len;x++)
            {
                if(s[x]!='a')
                {
                    ind=len-x;
                    break;
                }
            }
            s.insert(ind,"a");
            cout<<s;
            cout<<endl;
        }
    }
    return 0;
}