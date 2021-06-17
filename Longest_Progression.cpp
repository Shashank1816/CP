#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        vector<long int > ar;
        long int enter;
        for(int x=0;x<n;x++)
        {
            cin>>enter;
            ar.push_back(enter);
        }
        vector<long int> diff;
        for(int x=1;x<n;x++)
        {
            enter=(ar[x-1]-ar[x]);
            diff.push_back(enter);
        }
        for(int x=0;x<(n-1);x++)
        {
            
        }

    }
}