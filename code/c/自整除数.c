#include <stdio.h>
int main()
{
	int n,t=0,m;
	scanf("%d",&n);
	m=n;
	while(n/10==0)
	{
		t=t+n%10;
		n=n/10;
		if(n<10)
		{
			break;
		}
	}
	t=t+n;
	if(m%t==0)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}
