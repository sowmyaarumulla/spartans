#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,a[10005];
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n-1;i++)
	    {
	        int temp;
	        if(i%2==0)
	        {
	            if(a[i]<a[i+1])
	            {
	                continue;
	            }
	            else
	            {
	                temp=a[i];
	                a[i]=a[i+1];
	                a[i+1]=temp;
	            }
	        }
	        else
	        {
	            if(a[i]>a[i+1])
	            {
	                continue;
	            }
	            else
	            {
	                temp=a[i];
	                a[i]=a[i+1];
	                a[i+1]=temp;
	            }
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
