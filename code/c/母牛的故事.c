#include <stdio.h>
int main()
{
	int f[100],i,j,n,year[100],index;
	f[1]=1,f[2]=2,f[3]=3,f[4]=4;
	for(i=1;i<=100;i++)
	{
		scanf("%d",&n);
		year[i]=n;
		if(n==0)
		{
			index=i;
			break;
		}
	}
	for(i=1;i<index;i++)
	{
		for(j=5;j<=year[i];j++)
		{
			f[j]=f[j-1]+f[j-3];
		}
		printf("%d\n",f[year[i]]);
	}
	return 0;
}
