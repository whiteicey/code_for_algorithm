#include <stdio.h>
int add(int a,int b)
{
	return(a+b);
}
int main()
{
	int a=10;
	int b=20;
	int sum; 
	sum = add(a,b);
	printf("%d\n",sum);
	return 0;
}
