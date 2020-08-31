#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n>>i;
	int ns;
	ns = 1<<(i-1);
	if((n&ns)!=0)
	{
		cout<<"BIT IS SET";
	}
	else
	{
		cout<<"BIT IS NOT SET";
	}
	return 0;
}
