#include <stdio.h>
int main()
{
	int m,n,i,num=0,j,k=1,index=1,l;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=1;j<=1000;j++)
		{
			if(j*j==(i+100))
			{
				k=0;
				break;
			}
		}
		for(l=1;l<=1000;l++)
		{
			if(l*l==(i+268))
			{
				index=0;
				break;
			}
		}
		if(k==0&&index==0)
		{
			printf("%d ",i);
			num++;
		}
		k=1;
		index=1;
	}
	if(num==0)
	{
		printf("no");
	}
	return 0;
}
