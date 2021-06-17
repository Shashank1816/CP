#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cas=1;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>vec;
        vec.push_back(1);
        int c=1;
        for(int x=1;x<n;x++)
        {
            if(s[x]>s[x-1])
            {
                c++;
                vec.push_back(c);
            }
            else
            {
                c=1;
                vec.push_back(c);
            }
            
        }
        cout<<"Case #"<<cas<<": ";
        cas++;
        for(int x=0;x<n;x++)
        {
            cout<<vec[x]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}