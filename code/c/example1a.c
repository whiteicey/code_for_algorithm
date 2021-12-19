#include <stdio.h>
int main()
{
	int m,n,i,a,b,c,num=0;
	scanf("%d%d",&m,&n);
	if(m<100)
	{
		m=100;
	}
	if(n>999)
	{
		n=999;
	}
	for(i=m;i<=n;i++)
	{
		a=i/100;
		b=i/10-a*10;
		c=i-a*100-b*10;
		if(i==a*a*a+b*b*b+c*c*c)
		{
			num=num+1;
			printf("%d ",i);
		}
	}
	if(num==0)
	{
		printf("No Answer");
	}
	/*
	else
	{
		for(i=100;i<=999;i++)
		{
			a=i/100;
			b=i/10-a*10;
			c=i-a*100-b*10;
			if(i==a*a*a+b*b*b+c*c*c)
			{
				num=num+1;
				printf("%d ",i);
			}
		}
		if(num==0)
		{
			printf("No Answer");
		}
	}*/
	return 0;
}
