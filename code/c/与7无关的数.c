#include <stdio.h>
int main()
{
	int n,i=1,m,k=0,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=i*i;
		if(i%7!=0&&i%10!=7&&i/10!=7)
		{
			k=k+m;
		}
	}
	printf("%d",k);
	return 0;
}
