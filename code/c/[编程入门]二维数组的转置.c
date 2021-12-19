#include <stdio.h>
int main()
{
	void swap(int arr[3][3]);
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	swap(a);
	return 0;
}
void swap(int arr[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[j][i]);
			if(j==2)
			{
				printf("\n");
			}
		}
	}
}
