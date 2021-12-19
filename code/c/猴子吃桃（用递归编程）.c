#include <stdio.h>
int main()
{
	int n,sum=1,i;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum=(sum+1)*2;
	}
	printf("%d",sum);
	return 0;
}
