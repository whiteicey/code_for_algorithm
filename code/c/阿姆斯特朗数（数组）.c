#include <stdio.h>
int main()
{
	int a,sum=0,b,i,e;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=0;
		if(i<10)
		{
			e=i;
			if(i==e*e*e)
			{
				printf("%d ",i);
			}
		}
		else if(i>=10)
		{
			e=i;
			while(1)
			{
			
				b=e%10;
				sum=sum+b*b*b;
				e=e/10;
				if(e<10)
				{
					sum=sum+e*e*e;
					break;
				}
			}
			if(sum==i)
			{
				printf("%d ",i);
			}
		}	
	}
	return 0;
}

