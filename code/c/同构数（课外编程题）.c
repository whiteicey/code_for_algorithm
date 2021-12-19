#include <stdio.h>
int main()
{
	int a,b,i,j,k;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		k=2;
		
		if(i<10)
		{
			for(j=a;j<=99;j++)
			{
				if(i*i==j&&j%10==i)
				{
					k=1;
					break;
				}
			}
		}
		else
		{
			for(j=a;j<9801;j++)
			{
				if((i*i==j)&&(j%10==i%10)&&((j/10)%10==(i/10)%10))
				{
					k=1;
					break;
				}
			}
		}
		
		
		if(k==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
