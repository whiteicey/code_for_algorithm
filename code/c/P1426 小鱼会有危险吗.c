#include <stdio.h>
#include <math.h>
int main()
{
	double s,x,t=1,v=7;
	double sum=0;
	scanf("%lf%lf",&s,&x);
	while(1)
	{
		sum=sum+v;
		v*=0.98;
		if(sum>=s-x&&sum<=s+x)
		{
			break;
		}
		else if(sum>s+x)
		{
			printf("n");
			return 0;
		}
	}
	sum+=v;
	if(sum>s+x)
	{
		printf("n");
	}
	else
	{
		printf("y");
	}
	return 0;
 } 
