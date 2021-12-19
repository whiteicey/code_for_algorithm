#include <stdio.h>
int main()
{
	int i,a,b,c,d;
	for(i=1000;i<=9999;i++)
	{
		a=i/1000%10;
		b=i/100%10;
		c=i/10%10;
		d=i%10;
		if((a==d)&&(b==c))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
