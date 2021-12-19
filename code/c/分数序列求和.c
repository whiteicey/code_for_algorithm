#include<stdio.h>
int main()
{
	float i,j=2,sum=0,k,l=1,temp;
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=j/l;
		sum=sum+k;
		temp=j;
		j=j+l;
		l=temp;
	}
	printf("%.3f",sum);
	return 0;
}
