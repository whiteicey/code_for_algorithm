#include <stdio.h>
struct space
{
	double a;
	double b;
	double c;
	double d;
};
void caculate(char m,double a,double b,double c,double d)
{
	if(m=='+')
	{
		printf("%.2lf+%.2lfi",a+c,b+d);
	}
	else if(m=='-')
	{
		printf("%.2lf+%.2lfi",a-c,b-d);
	}
	else if(m=='*')
	{
		printf("%.2lf+%.2lfi",(a*c)-(b*d),(a*d)+(b*c));
	}
	else if(m=='/')
	{
		printf("%.2lf+%.2lfi",((a*c)+(b*d))/((c*c)+(d*d)),((c*b)-(d*a))/((c*c)+(d*d)));
	}
}
int main()
{
	char c;
	struct space space;
	scanf("%c%lf%lf%lf%lf",&c,&space.a,&space.b,&space.c,&space.d);
	caculate(c,space.a,space.b,space.c,space.d);
	return 0;
}
