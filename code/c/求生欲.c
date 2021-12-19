#include <stdio.h>
int main()
{
	int n,p1=0,p2=5,i,temp;
	scanf("%d",&n);
	n=n%16;
	int a[16]={0,5,5,3,1,4,5,2,0,2,2,4,6,3,2,5};
	printf("%d",a[n-1]);
	return 0;
}
