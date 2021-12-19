#include <stdio.h>
#include <math.h>
double caculate(double a,double b,double c);
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a!=0)
	{
		caculate(a,b,c);
	}
	else
	{
		printf("%.2lf",(-c)/b);
	}
	return 0;
 } 
 double caculate(double a,double b,double c)
 {
 	double p,q;
 	if(b*b-4*a*c<0)
 	{
 		p=-b/(2*a);
		q=(sqrt(4*a*c-b*b))/(2*a);
		printf("%.2lf+%.2lfi %.2lf-%.2lfi",p,q,p,q);
	}
	else if(b*b-4*a*c==0)
	{
		p=-b/(2*a);
 		//q=(sqrt(b*b-4*a*c))/2*a;
 		printf("%.2lf",p);
	}
	else if(b*b-4*a*c>0)
	{
		p=-b/(2*a);
 		q=(sqrt(b*b-4*a*c))/2*a;
 		printf("%.2lf %.2lf",p+q,p-q);
	}
 }
