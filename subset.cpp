#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int tsb=pow(2,n);
	for(i=0;i<tsb;i++)
	{
		cout<<"{";
		for(j=1;j<=n;j++)
		{
			if((i&(1<<(j-1)))!=0)
			{
				cout<<a[j-1]<<" ";
			}
		}
		cout<<"}";
		cout<<endl;
	}
	return 0;
}
