#include <stdio.h>
#include <math.h>
int main()
{
	float a,x1,x2;
	scanf("%f",&a);
	x1=a/2;
	x2=(x1+a/x1)/2;
	while(fabs(x1-x2)>1e-5)
	{
		x1=x2;
		x2=(x1+a/x1)/2;
	}
	printf("%.3f",x2);
	return 0;
 } 
