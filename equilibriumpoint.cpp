#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,a,sum=0;
        cin>>n;
        vector<int>v;
        long long int eq=-1;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
        long long int prev=0,next;
        for(i=0;i<n;i++)
        {
            next=sum-v[i]-prev;
            if(next==prev)
            {
                eq=i+1;
                break;
            }
            prev=prev+v[i];
        }
        if(eq>0)
        {
            cout<<eq<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
	
	return 0;
}
