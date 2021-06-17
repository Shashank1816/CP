
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int costof(vector<int> vec)
{
        int cost=0;
        int n=vec.size();
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
        return cost;
}
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
        int c;
        cin>>c;
        int flag=0;//if 1 then cost mil gaya else impossible
        vector<int> vec;
        for(int x=0;x<n;x++)
        {
            vec.push_back(x+1);
        }
        do {
            if(costof(vec)==c)
            {
                flag=1;
                break;
            }
        }while(next_permutation(vec.begin(),vec.end()));
        
        cout<<"Case #"<<cas<<": ";
        if(flag==1)
        {
            for(int x=0;x<n;x++)
            {
                cout<<vec[x]<<" ";
            }
            cout<<endl;
        }
        else 
        {
            cout<<"IMPOSSIBLE";
        }
        cout<<endl;
    }
    return 0;
}