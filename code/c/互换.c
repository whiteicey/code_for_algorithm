#include <stdio.h>
int main()
{
	int i,j,a[2][3],b[3][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
