#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int dividend ,divisor,q=0,val=0;
	cin>>dividend>>divisor;
	int i;
	for(i=31;i>=0;i--)
	{
		if(val+(divisor<<i)<=dividend)
		{
			val+=divisor<<i;
			q=q|(1<<i);
		}
	}
	cout<<q;
	return 0;
}
