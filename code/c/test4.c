#include <stdio.h>
int main()
{
	int a[6]={1,2,3,4,5};
	//int b[10]={1,2,3,4,5,6,7,8,9,10};
	int n,i;
	int arr(int c[]);
	arr(a);
	for(i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
int arr(int c[])
{
	int i=6;
	c[i]=6;
	return c;
}
