#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,sum=0,i;
	scanf("%d",&n);
	int* a;
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("%d %d",sum,sum/n);
	return 0;
}
