#include <stdio.h>
int count(int i)
{
	int sum=0;
	//char two[17]={'\0'};
	int j=0;
	while(i!=0)
	{
		if(i%2==1)
		{
			sum++;
		}
		i=i/2;
	}
	return sum;
} 
int main()
{
	int l,r,sum;
	scanf("%d%d",&l,&r);
	int i;
	for(i=l;i<=r;i++)
	{
		sum+=count(i);
	}
	printf("%d",sum);
	return 0;
} 
