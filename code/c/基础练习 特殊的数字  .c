#include <stdio.h>
int main()
{
	int i,a,b,c;
	for(i=100;i<999;i++)
	{
		a=i/100%10;
		b=i/10%10;
		c=i%10;
		if(a*a*a+b*b*b+c*c*c==i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
