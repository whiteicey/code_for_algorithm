#include <stdio.h>
int main()
{
	long int n;
	long int i;
	long int a1=1,a2=1;
	long int temp;
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		temp=a2;
		a2=(a1+a2)%10007;
		a1=temp;
	}
	printf("%ld",a2);
	return 0;
}
