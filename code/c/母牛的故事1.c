#include <stdio.h>
int main()
{
	int f[100]={1,2,3},year[100],i,n;
	int j,index;
	f[1]=1,f[2]=2,f[3]=3,f[4]=4;
	for(i=0;i<=10;i++)
	{
		scanf("%d",&n);
		year[i]=n;
		if(year[i]==0)
		{
			index=i;
			break;
		}
	}
	for(i=0;i<index;i++)
	{
		for(j=5;j<=year[i];j++)
		{
			f[j]=f[j-1]+f[j-3];
		}
		printf("%d\n",f[year[i]]);
	}
	return 0;
}


