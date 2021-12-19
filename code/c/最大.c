#include <stdio.h>
int main()
{
	int a[3][4],i,j,b,c=0,d=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	b=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(b<a[i][j])
			{
				b=a[i][j];
				c=i;
				d=j;
			}
		}
	}
	printf("%d %d %d",b,c+1,d+1);
	return 0;
}
