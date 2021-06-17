#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        vector<long int> vec;
        long int enter;
        for(long int x=0;x<n;x++)
        {
            cin>>enter;
            vec.push_back(enter);
        }
        sort(vec.begin(),vec.end());
        /*
        //to check if vector is sorted
        cout<<"sorted Array\n";
        for(int x=0;x<n;x++)
        {
            cout<<vec[x]<<" ";
        }
        cout<<"\n";
        */
        long int x,y,z;
        x=vec[n-1];
        y=vec[0];
        z=vec[n-2];
        cout<<(x-y)*2<<endl;
        
    }
    return 0;
}
