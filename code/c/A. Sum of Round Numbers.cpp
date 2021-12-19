#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string m;
		int a[100],step=0,i=0,len,flag=0;
		cin>>m;
		len=m.length();
		for(i=1;i<len;i++)
		{
			if(m[i]!='0')
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<1<<"\n"<<m<<"\n";
			continue;
		}
		for(i=0;i<len;i++)
		{
			if(m[i]!='0')
			{
				a[step]=(m[i]-'0')*pow(10,(len-i-1));
				step++;
			}
		}
		cout<<step<<"\n";
		for(i=0;i<step;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
