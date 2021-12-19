#include <stdio.h>
int sort(int m,int n)
{
	int g=0;
	if(m<n)
	{
		g=g;
	}
	else if(n==0)
	{
		g++;
	}
	else
	{
		g=sort(m-1,n)+sort(m,n-1);
	}
	return g;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",sort(m,n));
	return 0;
}
