#include <stdio.h>
#include <string.h>
char a[10][1001];
char test(int n);
int main()
{
	
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	test(n);
	return 0;
}
char test(int n)
{
	int num,i,len,index=0,j;
	char b[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int c[26]={0};
	for(i=0;i<n;i++)
	{
		index=0;
		len=strlen(a[i]);
		for(j=0;j<len;j++)
		{
			for(index=0;index<26;index++)
			{
				if(a[i][j]==b[index])
				{
					c[index]++;
					break;
				}
			}
		}
		int temp1;
		temp1=c[0];
		int temp2=0;
		for(j=0;j<26;j++)
		{
			if(c[j]>=temp1)
			{
				temp1=c[j];
				temp2=j;
			}
		}
		printf("%c %d\n",b[temp2],temp1);
		for(j=0;j<26;j++)
		{
			c[j]=0;
		}
	}
}
