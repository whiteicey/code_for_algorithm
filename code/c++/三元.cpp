#include <stdio.h>
int main01()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("���ֵ��%d\n",a>b?a:b);
	return 0;
}


int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("���ֵ��%d\n",a);
	}
	else
	{
		printf("���ֵ��%d\n",b);
	}
	return 0;
 } 
