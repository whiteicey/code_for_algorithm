#include <stdio.h>
int guess(int n);
int main()
{
	int n,i=0;
	scanf("%d",&n);
	while(n!=1)
	{
		n=guess(n);
		i++;
	}
	printf("%d",i);
	return 0;
}
int guess(int n)
{
	if(n%2==0)
	{
		n/=2;
	}
	else
	{
		n=(n*3+1)/2;
	}
	return n;
}
