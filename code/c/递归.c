#include <stdio.h>
int main()
{
	float fac(int n);
	int n;
	float f;
	scanf("%d",&n);
	f=fac(n);
	printf("%.0f",f);
	return 1;
}
float fac(int n)
{
	float f; 
	if(n<0)
	{
		printf("error");
	}
	else if(n==0||n==1)
	{
		f=1;
	}
	else
	{
		f=fac(n-1)*n;
	}
	
	return f;
}
