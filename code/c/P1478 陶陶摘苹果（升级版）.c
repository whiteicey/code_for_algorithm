#include <stdio.h>
struct apple
{
	int high;
	int strength;
};
int main()
{
	struct apple p[10000];
	struct apple temp;
	int n,a,s,b,i,sum=0,j;
	scanf("%d%d",&n,&s);
	scanf("%d%d",&a,&b);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&p[i].high,&p[i].strength);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(p[i].strength>p[j].strength)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a+b>=p[i].high)
		{
			if(s-p[i].strength>=0)
			{
				sum++;
				s-=p[i].strength;
			}
		}
	}
	printf("%d",sum);
	return 0;
} 
