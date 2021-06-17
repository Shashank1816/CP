#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cas=0;
    while(t--)
    {
        cas++;
        int n;
        cin>>n;
        vector<int> vec;
        int enter;
        for(int x=0;x<n;x++)
        {
            cin>>enter;
            vec.push_back(enter);
        }
        int cost=0;
        for(int i=0;i<n-1;i++)
        {
            int j;//index of min
            int min=INT_MAX;
            for(int y=i;y<n;y++)
            {
                if(vec[y]<min)
                {
                    min=vec[y];
                    j=y;
                }
            }
            cost=cost+(j-i+1);
            reverse(vec.begin()+i,vec.begin()+(j+1));
        }
        cout<<"Case #"<<cas<<": "<<cost<<"\n";
    }
}