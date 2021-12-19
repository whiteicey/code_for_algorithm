#include <stdio.h>
#include <string.h>
#include <math.h>
void change(int len,int n,int i);
char a[10][100001]={'\0'};
int main()
{
	int n,len,i;
	int b[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		len=strlen(a[i]);
		change(len,n,i);
		printf("\n");
	}
	return 0;
}
void change(int len,int n,int i)
{
	int index,j;
	long long int sum=0;
	index=len-1;
	for(j=0;j<len;j++)
	{
		if(a[i][j]>='0'&&a[i][j]<='9')
		{
			sum=sum+(a[i][j]-48)*pow(16,index);
			index--;
		}
		else if(a[i][j]>='A'&&a[i][j]<='Z')
		{
			sum=sum+(a[i][j]-55)*pow(16,index);
			index--;
		}
		
	}
	int c[100000];
	for(i=0;;i++)
	{
		c[i]=sum%8;
		sum=sum/8;
		if(sum==0)
		{
			break;
		}
	}
	//int j;
	for(j=i;j>=0;j--)
	{
		printf("%d",c[j]);
	}
}
