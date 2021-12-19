#include <stdio.h>
int main()
{
	int sign=1;
	double deno=2;
	double term;
	double sum=1.0;
	while(deno<=100)
	{
		sign=(-1)*sign;
		term=sign*(1/deno);
		sum=sum+term;
		deno=deno+1;
	}
	printf("%f\n",sum);
}
