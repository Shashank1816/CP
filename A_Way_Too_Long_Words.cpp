#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> vec;
    string enter;
    for(int x=0;x<n;x++)
    {   
        cin>>enter;
        vec.push_back(enter);
    }
    int len;
    int bw;//characters in between
    for(int x=0;x<n;x++)
    {

        len=vec[x].size();
        if(len>10)
        {
            bw=len-2;
            string bw1=to_string(bw);
            vec[x]=vec[x][0]+bw1+vec[x][len-1];
        }
        
    }
    for(int x=0;x<n;x++)
    {
        cout<<vec[x]<<endl;
    }
    return 0;
}
