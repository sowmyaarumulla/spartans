#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,size;
	cin>>n>>size;
	int i,bag=0,round=0;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(bag+a[i]<=size)
		{
			bag=bag+a[i];
		}
		else
		{
			round++;
			bag=a[i];
		}
		cout<<bag<<" "<<round<<endl;
	}
	cout<<round+1;
	return 0;
}
