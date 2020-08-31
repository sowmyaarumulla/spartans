#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=33,a=0;
	cin>>n;
	while(i>=0 && a==0)
	{
		i--;
		a= n & (1<<(i-1));
	}
	cout<<i;
	return 0;
}
