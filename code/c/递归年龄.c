#include <stdio.h>
int main()
{
	int age(int n);
	printf("%d\n",age(5));
	return 0;
}
int age(int n)
{
	int c;
	if(n==1)
	{
		c=10;
	}
	else
	{
		c=2+age(n-1);//n=5;c=2+age(4); n=4;c=2+age(3) n=3;c=2+age(2) n=2;c=2+age(1) n=1;c=10;-->age(1)=10;
	}
	return c;
}
