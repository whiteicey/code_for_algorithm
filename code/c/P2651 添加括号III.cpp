#include<bits/stdc++.h>
using namespace std;
int a[10001],t,n;
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
	{
        cin>>n>>a[1]>>a[2];
        a[2]/=__gcd(a[1],a[2]);
        for(int i=3;i<=n;i++)
		{
            cin>>a[i];
            a[2]/=__gcd(a[2],a[i]);
        }
        if(a[2]==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
	return 0;
}
