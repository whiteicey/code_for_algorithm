#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	if(10000<=a&&a<=99999)
	{
		b=a/10000;
		c=a/1000-b*10;
		d=a/100-(b*100+c*10);
		e=a/10-(b*1000+c*100+d*10);
		f=a-b*10000-c*1000-d*100-e*10;
		printf("5\n%d %d %d %d %d\n%d%d%d%d%d",b,c,d,e,f,f,e,d,c,b);
	}
	else if(1000<=a&&a<=9999)
	{
		b=a/1000;
		c=a/100-b*10;
		d=a/10-b*100-c*10;
		e=a-b*1000-c*100-d*10;
		printf("4\n%d %d %d %d\n%d%d%d%d",b,c,d,e,e,d,c,b);
	}
	else if(100<=a&&a<=999)
	{
		b=a/100;
		c=a/10-b*10;
		d=a-b*100-c*10;
		printf("3\n%d %d %d\n%d%d%d",b,c,d,d,c,b);
	}
	else if(10<=a&&a<=99)
	{
		b=a/10;
		c=a-b*10;
		printf("2\n%d %d\n%d%d",b,c,c,b);
	}
	else
	{
		printf("1\n%d\n%d",a,a);
	}
	return 0;
}
