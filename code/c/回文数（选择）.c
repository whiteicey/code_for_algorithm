#include <stdio.h>
int main()
{
	int i,a,b,c,d,e;
	scanf("%d",&i);
	if(i>=10000&&i<=99999)
	{
	
		a=i%10;
		b=(i/10)%10;
		c=(i/100)%10;
		d=(i/1000)%10;
		e=i/10000;
		if(a==e&&b==d)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	else
	{
		printf("error");
	}
	return 0;
}
