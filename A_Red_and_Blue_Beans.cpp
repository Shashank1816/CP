#include<bits/stdc++.h>


using namespace std;
#define int             long long

int32_t main()
{
	
	int t;
    cin>>t;
    while(t--)
    {
        int r,b,d;
        cin>>r>>b>>d;
        int less=(r>=b)?b:r;
        int max=(r+b)-less;
        //less jitne packets hosakte hain 
        bool ans=false;//no
        if(d==0)
        {
            if(r==b)
            {
                //ans=true;
                cout<<"YES";
            }
            else cout<<"NO";
        }
        else
        {
            int rem=max-less;
            //ab remaining ko distribute karna hai less number of packets me 
            double dist=rem/(double)less;
            dist=(ceil(dist));
            if(dist<=d)
            {
                //ans=true;
                cout<<"YES";
            }
            else
            {
                //ans=false;
                cout<<"NO";
            }


        }
        cout<<"\n";

        
    }
	return 0;
}