#include <cstdio>
#include <iostream>
using namespace std;
int m[100000]={0,1,1};
int main()
{
	while(1)
	{
		int a,b,c,i;
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)
		{
			return 0;
		}
		if(c==1||c==2)
		{
			cout<<m[c]<<endl;
		}
		else
		{
			for(i=3;i<=c;i++)
			{
				m[i]=(a*m[i-1]+b*m[i-2])%7;
			}
			cout<<m[c]<<endl;
		}
	}
}
