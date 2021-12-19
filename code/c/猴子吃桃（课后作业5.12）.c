#include <stdio.h>
int main()
{
	int n,i,j,sum=1;
	scanf("%d",&n); 
	for(i=n;i>1;i--)
	{
		sum=(sum+1)*2;
	}
	printf("%d",sum);
	return 0;
}
