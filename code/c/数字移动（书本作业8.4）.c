#include <stdio.h>
int main()
{
	int m,n,i;
	scanf("%d%d",&n,&m);
	int a[100]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int* p;
	p=&a[n-m];
	int b[100]={0};
	for(i=0;i<m;i++)
	{
		b[i]=* p;
		p++;
	}
	p=&a;
	for(i=m;i<n;i++)
	{
		b[i]=* p;
		p++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
