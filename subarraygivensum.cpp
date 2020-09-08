#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,j,s;
        cin>>n>>s;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int sum=a[0],start=-1,last=-1;
        i=0;
        for(j=1;j<n;j++)
        {
            sum=sum+a[j];
            while(sum>s)
            {
                sum=sum-a[i];
                i++;
            }
            if(sum==s)
            {
                start=i+1;
                last=j+1;
                break;
            }
        }
        if(start==-1 && last==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<start<<" "<<last<<endl;
        }
    }
	
	return 0;
}
