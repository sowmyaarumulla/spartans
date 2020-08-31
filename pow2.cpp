#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==0)
	{
		cout<<"NO";
	}
	else if((n & n-1)==0)
	{
		cout<<"YES "<<n<<" is a power of 2";
	}
	else
	{
		cout<<"NO "<<n<<" is not a power of 2";
	}
	return 0;
}
