#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int sum=0;
		int count=0;
		while(sum<n)
		{
			sum=sum+2021;
			count++;
		}
		if(sum==n || (sum-count)<=n)
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}