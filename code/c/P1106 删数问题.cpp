#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	string n;
	int k,len,i,j;
	cin>>n>>k;
	len=n.length();
	while(k--)
	{
		for(i=0;i<len-1;i++)
		{
			if(n[i]>n[i+1])
			{
				for(j=i;j<len;j++)
				{
					n[j]=n[j+1];
				}
				break;
			}
		}
		len--;
	}
	i=0;
	while(i<=len-1&&n[i]=='0')
	{
		i++;
	}
	if(i==len)
	{
		cout<<'0';
	}
	else
	{
		for(j=i;j<len;j++)
		{
			cout<<n[j];
		}
	}
	return 0;
}
