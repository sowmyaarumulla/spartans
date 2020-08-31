#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	int temp=n;
	while(n!=0)
	{
		n= n & n-1;
		count++;
	}
	cout<<"The number of 1's in "<<temp<<" "<<count;
	return 0;
}
