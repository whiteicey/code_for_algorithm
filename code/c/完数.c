#include <stdio.h>
int main()
{
	int n,i=2,sum=0,m,j,s,o;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		for(m=1;m<i;m++)
		{
			if(i%m==0)
			{
				sum=m+sum;
			}
		}
		if(i==sum)
		{
			s=2;
		}
		if(s==2)
		{
			printf("%d its factors are ",i);
			for(o=1;o<i;o++)
			{
				if(i%o==0)
				{
					printf("%d ",o);
				}
			}
			printf("\n");
		}
		sum=0;
		s=1;
	}
	return 0;
}
