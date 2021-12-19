#include <stdio.h>
int main()
{
	int max(int a,int b);
	int min(int a,int b);
	int m,n;
	int max1,min1;
	scanf("%d%d",&m,&n);
	max1=max(m,n);
	min1=min(m,n);
	printf("%d\n%d",max1,min1);
	return 0;
}
int max(int a,int b)
{
	int c;
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}
int min(int a,int b)
{
	int d;
	d=(a*b)/max(a,b);
	return d;
}
