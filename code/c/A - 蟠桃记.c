#include <stdio.h>
int main()
{
	int m;
	while(scanf("%d",&m) != EOF)
	{
		int i,sum=1;	
		for(i=m-2;i>=0;i--)
		{
			sum=(sum+1)*2;
		}
		printf("%d\n",sum);
	}
	return 0;
}
