#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int num[10000];
int n,i;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	while(1)
	{
		char str[10000]={"\0"};
		int m;
		cin>>m;
		if(m==0)
		{
			break;
		}
		getchar();
		gets(str);
		while(m--)
		{
			char temp[10000]={"\0"};
			int k;
			if(strlen(str)<n)
			{
				for(k=strlen(str);k<n;k++)
				{
					str[k]=' ';
				}
			} 
			for(i=0;i<n;i++)
			{
				temp[num[i]-1]=str[i];
			}
			for(i=0;i<n;i++)
			{
				str[i]=temp[i];
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%c",str[i]);
		}
		printf("\n");
	}
	int b;
	scanf("%d",&b);
	if(b==0)
	{
		return 0;
	} 
}
