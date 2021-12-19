#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
using namespace std;
int a[100000];
void change (int index)
{
	int i;
	for(i=index-1;i>=0;i--)
	{
		if(a[i]-1<0)
		{
			a[i]-=1;
			a[i]=a[i]+10;
			if(a[i-1]-1>=0)
			{
				a[i-1]-=1;
				return ;
			}
		}
	}
}
int main()
{
	char b;
	int i=0;
	while(scanf("%d",&a[i])!=EOF)
	{
		i++;
	}
	if(a[0]==0)
	{
		cout<<-1;
		return 0;
	}
	int index=i;
	if(a[index-1]>0)
	{
		a[index-1]-=1;
		for(i=0;i<index;i++)
		{
			cout<<a[i]<<' ';
		}
	}
	else
	{
		change(index);
		if(a[0]==0)
		{
			for(i=1;i<index;i++)
			{
				cout<<a[i]<<' ';
			}
		}
		else
		{
			for(i=0;i<index;i++)
			{
				cout<<a[i]<<' ';
			}
		}
	}
	return 0;
}
