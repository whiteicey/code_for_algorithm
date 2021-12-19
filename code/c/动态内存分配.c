#include <stdio.h>
#include <stdlib.h> 
int main01()
{
	int number;
	int* a;
	int i;
	scanf("%d",&number);
	a=(int*)malloc(number*sizeof(int));
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=number;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	free(a);
	return 0;
} 
int main02()
{
	void* p;
	int cnt=0;
	while((p=malloc(100*1024*1024)))
	{
		cnt++;
	}
	printf("%d00",cnt);
	free(p);
	return 0;
}
