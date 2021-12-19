#include<iostream>
#include<cmath>
using namespace std;
int f[1001],n,t,v[101],w[101];
int main()
{
    cin>>t>>n;
    for(int i=1;i<=n;i++)
	{
        cin>>w[i]>>v[i];
    }
    for(int i=1;i<=n;i++)
	{
        for(int j=t;j>=w[i];j--) 
		{
            f[j]=max(f[j-w[i]]+v[i], f[j]);
        }
    }
    cout<<f[t];
    return 0;
}
