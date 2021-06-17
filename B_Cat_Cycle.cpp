#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        long int k;
        cin>>n>>k;
        long int ar[k];
        long int br[k];
        long int i=n;
        for(long int x=0;x<k;x++)//A ki array bana li k tak ki 
        {
            ar[x]=i;
            i--;
            if(i==0)
            {
                i=n;
            }
        }
        //B ki array banane ka kaam 
        long int j=1;
        for(long int x=0;x<k;x++)
        {
            br[x]=j;
            j++;
            if(j==(n+1))
            {
                j=1;
            }
            //now if elements are similar
            if(ar[x]==br[x])
            {
                
                
                br[x]=j;
                j++;
                if(j==(n+1))
                {
                    j=1;
                }
            }
            
        }
        //the position of cat B at hour k will be br[k];
        cout<<br[k-1]<<endl;
        
    }
    return 0;
}