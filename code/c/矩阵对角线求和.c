#include <stdio.h>
int main()
{
	int a[3][3],i,j,m,n;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	m=a[0][0]+a[1][1]+a[2][2];
	n=a[2][0]+a[1][1]+a[0][2];
	printf("%d %d",m,n);
	return 0;
 } 
