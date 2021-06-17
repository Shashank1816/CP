#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int in0=-1,in1=-1;//indexes of 2 consecutive 0's and 1's 
        int f0=0,f1=0;//ye pata karne ke lie ki hai bhi consecutive ya nahi 
        for(int x=1;x<n;x++)
        {
            if((s[x]==s[x-1]) && s[x]=='0')
            {
                f0=1;
            }
            else if((s[x]==s[x-1]) && s[x]=='1')
            {
                f1=1;
            }
        }
        
        for(int x=1;x<n;x++)
        {
            if(s[x]==s[x-1] && s[x]=='0')
            {
                in0=x-1;
                //final index of 00 nikalna hai 
            }
        }
        for(int x=1;x<n;x++)
        {
            if(s[x]==s[x-1] && s[x]=='1')
            {
                in1=x-1;
                break;
                //initial index of 11 nikalna hai 
            }
        }
        //11 ke baad ek aur 11 nahi aana chahiye jiske beech me kabhi 0 aae

        if((f0==1 && f1==1) && in1<in0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}