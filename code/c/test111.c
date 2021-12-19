#include <stdio.h>
float max(float a,float b);
int main()
{
	float a,b,z;
	scanf("%f%f",&a,&b);
	z=max(a,b);
	printf("%.2f\n",z);
	z=max(2.5+3.8,max(a,b));
	printf("%.2f\n",z);
} 
float max(float a,float b)
{
	float c;
	c=a>b?a:b;
	return c;
}
