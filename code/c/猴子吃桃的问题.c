#include <stdio.h>
int main()
{
	int sum,n,k=1,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		k=(k+1)*2;
	}
	printf("%d",k);
	return 0; 
 } 
