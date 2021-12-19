#include <stdio.h>
#include <string.h>
int main()
{
	int len1,len2,i,j,index=0,k=0,p;
	int m=0,n=0,len;
	int numa[200],numb[200],numc[40000]={0};
	char a[200],b[200];
	gets(a);
	gets(b);
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<len1;i++)
	{
		numa[i]=a[i]-'0';
		m++;
	}
	for(i=0;i<len2;i++)
	{
		numb[i]=b[i]-'0';
		n++;
	}
	int up;//进位
	int temp;//临时变量
	//i,j,k,p为记录计算位置 
	for(i=m-1;i>=0;i--,k++)
	{
		temp=0;
		up=0;
		for(j=n-1,p=0;j>=0;j--,p++)
		{
			temp=numa[i]*numb[j]+up+numc[k+p];
			numc[k+p]=temp%10;
			up=temp/10;
		}
		if(up>0)
		{
			numc[k+p]=up;
		}
	} 
	if(up==0)
	{
		len=k+p-1;
	}
	else
	{
		len=k+p;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%d",numc[i]);
	}
	return 0;
}
