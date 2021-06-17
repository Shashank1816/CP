#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //sabse chotta number jo missing hai usse zyaada MEX value nahi ho sakti 
        int n;
        cin>>n;
        vector<int> vec;
        int enter;
        int ar[101]={0};
        for(int x=0;x<n;x++)
        {
            cin>>enter;
            vec.push_back(enter);
            ar[enter]++;
        }
        //pehla number jo missing hai 
        int miss=101;
        for(int x=0;x<101;x++)
        {
            if(ar[x]==0)
            {
                miss=x;
                break;
            }
        }
        vector<int> fin;
        for(int x=0;x<101;x++)
        {
            if(x<miss)
            {
                fin.push_back(x);
                ar[x]--;
            }
        }
        //miss se pehle tak sorted single values aa gayi 
        //uske baad kuch bhi random order laga do 
        for(int x=0;x<101;x++)
        {
            if(ar[x]>0)
            {
                for(int y=1;y<=ar[x];y++)
                fin.push_back(x);
            }
        }
        //for printing
        for(int x=0;x<n;x++)
        {
            cout<<fin[x]<<" ";
        }
        cout<<"\n";
    }
    return 0;
    
}