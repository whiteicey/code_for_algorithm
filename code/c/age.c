#include <stdio.h>
int main()
{
	int n;
	int age(int n);
	scanf("%d",&n);
	printf("%d",age(n));
	return 0;
}
int age(int n)
{
	int i,age=10;
	for(i=2;i<=n;i++)
	{
		age=age+2;
	}
	return age;
}
