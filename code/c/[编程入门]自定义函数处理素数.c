#include <stdio.h>
int main()
{
	int n;
	void prime(int c);
	scanf("%d",&n);
	prime(n);
}
 void prime(int c)
 {
 	int i,k;
 	for(i=2;i<c;i++)
	{
		k=0;
		if(c%i==0)
		{
			k=0;
			printf("not prime");
			break;
		}
		else
		{
			k=1;
		}
	}
	if(k==1)
	{
		printf("prime");
	}
 } 
