#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a,b,c,d,e,f;
	int sum=0;
	for(i=10000;i<=99999;i++)
	{
		a=i/10000%10;
		b=i/1000%10;
		c=i/100%10;
		d=i/10%10;
		e=i%10;
		sum=a+b+c+d+e;
		if((a==e)&&(b==d)&&(sum==n))
		{
			printf("%d%d%d%d%d",a,b,c,d,e);
			printf("\n");
		}
	}
	for(i=100000;i<999999;i++)
	{
		a=i/100000%10;
		b=i/10000%10;
		c=i/1000%10;
		d=i/100%10;
		e=i/10%10;
		f=i%10;
		sum=a+b+c+d+e+f;
		if((a==f)&&(b==e)&&(sum==n)&&(c==d))
		{
			printf("%d%d%d%d%d%d",a,b,c,d,e,f);
			printf("\n");
		}
	}
	return 0;
}
