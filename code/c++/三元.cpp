#include <stdio.h>
int main01()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("最大值：%d\n",a>b?a:b);
	return 0;
}


int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("最大值：%d\n",a);
	}
	else
	{
		printf("最大值：%d\n",b);
	}
	return 0;
 } 
