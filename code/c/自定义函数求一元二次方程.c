#include <stdio.h>
#include <math.h>
double a,b,c,q,p,x1,x2;
void shiroot(double a,double b,double c)
{
	p=-b/(2*a);
	q=(sqrt(b*b-4*a*c))/(2*a);
	x1=p+q;
	x2=p-q;
	printf("%.2lf %.2lf",x1,x2);
}
void equal(double a,double b,double c)
{
	p=-b/(2*a);
	q=(sqrt(b*b-4*a*c))/(2*a);
	x1=p+q;
	x2=p-q;
	printf("%.2lf %.2lf",x1,x2);
}
void xuroot(double a,double b,double c)
{
	p=-b/(2*a);
	q=(sqrt(4*a*c-b*b))/(2*a);
	printf("%.2lf+%.2lfi %.2lf-%.2lfi",p,q,p,q);
}
int main()
{
	scanf("%lf%lf%lf",&a,&b,&c);
	double d;
	d=b*b-4*a*c;
	if(b*b-4*a*c>0)
	{
		shiroot(a,b,c);
	}
	else if(b*b-4*a*c==0)
	{
		equal(a,b,c);
	}
	else if(b*b-4*a*c<0)
	{
		xuroot(a,b,c);
	}
	return 0;
}

