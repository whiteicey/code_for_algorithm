#include <stdio.h>
int main()
{
	int x,a,b,c,d;
	scanf("%d",&x);
	if(x<10000&&x>=1000)
	{
		a=x/1000;
		b=x/100-a*10;
		c=x/10-a*100-b*10;
		d=x-a*1000-b*100-c*10;
		printf("%d%d%d%d",d,c,b,a);
	}
	else if(x<1000&&x>=100)
	{
		a=x/100;
		b=x/10-a*10;
		c=x-a*100-b*10;
		printf("%d%d%d",c,b,a);
	}
	else if(x>=10&&x<100)
	{
		a=x/10;
		b=x-a*10;
		printf("%d%d",b,a);
	}
	else
	{
		printf("%d",x);
	}
	return 0;
}
