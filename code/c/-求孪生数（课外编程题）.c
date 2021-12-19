#include <stdio.h>
int main()
{
	int m,n,a,b,i,s=0,num=0;
	scanf("%d%d",&m,&n);
	for(a=m;a<=n;a++)
	{
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			{
				s=s+i;
			}
		}
		b=s;
		s=0;
		if(b>=m&&b<=n)
		{
			for(i=1;i<b;i++)
			{
				if(b%i==0)
				{
					s=s+i; 
				}
			}
			if(s==a&&b!=a&&a<b)
			{
				num++;
				printf("%d %d\n",a,b);
			}
		}
		s=0;
	}
	if(num==0)
	{
		printf("NONE"); 
	}
	return 0;
}
