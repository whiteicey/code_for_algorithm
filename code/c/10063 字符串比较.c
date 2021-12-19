#include <stdio.h>
char a[20][20]={'\0'},b[20][20]={'\0'};
int stringcmp(int n);
int compare(char a[],char b[]);
int main()
{
	//char a[20][20]={'\0'},b[20][20]={'\0'};
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",&a[i],&b[i]);
	}
	stringcmp(n);
	return 0;
} 
int stringcmp(int n)
{
	int comp[20]={0},i;
	for(i=0;i<n;i++)
	{
		comp[i]=compare(a[i],b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",comp[i]);
	}
}
int compare(char a[],char b[])
{
	int c,i;
	int len1,len2;
	if(strcmp(a,b)==0)
	{
		c=0;
		return c;
	}
	else
	{
		len1=strlen(a);
		len2=strlen(b);
		if(len1>len2)
		{
			for(i=0;i<len1;i++)
			{
				c=a[i]-b[i];
				if(c!=0)
				{
					break;
				}
			}
			return c;
		}
		else
		{
			for(i=0;i<len2;i++)
			{
				c=a[i]-b[i];
				if(c!=0)
				{
					break;
				}
			}
			return c;
		}
	}
}
