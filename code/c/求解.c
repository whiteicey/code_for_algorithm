#include <stdio.h>
#include <math.h>
int main01()
{
	double a,b,c,x1,x2,p,q;
	scanf("%lf%lf%lf",&a,&b,&c);
	p=-b/2*a;
	q=sqrt(b*b-4*a*c)/2*a;
	x1=p+q;
	x2=p-q;
	printf("%f %f",x1,x2);
	return 0;
 } 
 int main02()
 {
 	float a,b;
 	scanf("%f%f",&a,&b);
 	printf("%f,%f\n",a,b);
 	return 0;
 }

int main03()
{
	putchar(66);
	putchar('\n');
	return 0;
}
int main04()
{
	char a,b,c;
	a=getchar();
	b=getchar();
	c=getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	return 0;
}

int main05()
{
	int i,j,k;
	for(i=2;i<=1000;i++)
	{
		k=1;
		for(j=2;j<i-1;j++)
		{
			if(i%j==0)
			{
				k=2;
				break;
			}
		}
		if(k==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
 
int main06()
{
	float p,r,n;
	int i;
	p=1;
	for(i=1;i<10;i++)
	{
		p=p*(1+0.07);
	}
	n=p-1;
	printf("%f\n",n);
	return 0;
}

int main07()
{
	int i=1000,j,k;
	float sum1,sum2,sum3,sum4,sum5,p1,p2;
	sum1=i*(1+5*0.03);
	p1=i*(1+2*0.021);
	sum2=p1+p1*(1+3*0.0275);
	p2=i*(1+3*0.0275);
	sum3=p2+(1+2*0.021);
	sum4=i;
	for(j=1;j<=5;j++)
	{
		sum4=sum4*(1+0.015);
	}
	sum5=i;
	for(k=1;k<=20;k++)
	{
		sum5=sum5*(1+0.0035/4);
	}
	printf("%f,%f,%f,%f,%f\n",sum1,sum2,sum3,sum4,sum5);
	return 0;
}

int main08()
{
	float d=300000,p=6000,r=0.01;
	float m;
	m=log10(p/(p-d*r))/log10(1+2);
	printf("%7.2f\n",m);
	return 0;
}




