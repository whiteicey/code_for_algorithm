#include <stdio.h>
int connect (int i)
{
	int j;
	while(i!=0)
	{
		if(i%10==7)
		{
			return 1;
		}
		i=i/10;
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int num[4]={0};
	int i;
	for(i=1;i<=n;i++)
	{
		if(i%7==0||connect(i))
		{
			n++;
			if((i%4)==0)
			{
				num[3]++;
			}
			else
			{
				num[(i%4)-1]++;
			}
		}
		
	}
	for(i=0;i<4;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
} 
