#include <stdio.h>
int root(int a);
int main()
{
	int a[20]={0};
	int i=0,index;
	int b[20]={0};
	while(1)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			break;
		}
		i++;
	}
	index=i;
	for(i=0;i<index;i++)
	{
		b[i]=root(a[i]);
	}
	for(i=0;i<index;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
int root(int a)
{
	int i,j,sum=0;
	while(a!=0)
	{
		sum=sum+a%10;
		a/=10;
	}
	if(sum<10)
	{
		return sum;
	}
	else
	{
		root(sum);
	}
}
