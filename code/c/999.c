#include <stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("   ");
		}
		for(k=i;k<=9;k++)
		{
			printf("%3d",i*k);
		}
		printf("\n");
	}
	return 0;
 } 
