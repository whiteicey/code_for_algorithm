#include <stdio.h>
#define PI 3.1415926
void select(int choice);
double triangle(double x,double y,double z);
double yuan(double x);
double juxing(double x,double y);
int main()
{
	int choice;
	while(1)
	{
		printf("1-triangle\n");
		printf("2-juxing\n");
		printf("3-yuan\n");
		printf("others-quit\n");
		scanf("%d",&choice);
		if(choice<1||choice>3)
		{
			break;
		}
		select(choice);
	}
	return 0;
}
void select(int choice)
{
	double x,y,z;
	if(choice==1)
	{
		scanf("%lf%lf%lf",&x,&y,&z);
		triangle(x,y,z);
	}
	else if(choice==2)
	{
		scanf("%lf%lf",&x,&y);
		juxing(x,y);
	}
	else if(choice==3)
	{
		scanf("%lf",&x);
		yuan(x);
	}
}
double triangle(double x,double y,double z)
{
	double sum;
	if(x+y<z&&x+z<y&&y+z<x)
	{
		printf("no\n"); 
	}
	else
	{
		sum=x+y+z;
		printf("%.2lf\n",sum);
	}
}
double juxing(double x,double y)
{
	double sum;
	sum=2*(x+y);
	printf("%.2lf\n",sum);
}
double yuan(double x)
{
	double sum;
	sum=2*PI*x;
	printf("%.2lf\n",sum);
}
