#include <stdio.h>
int main()
{
	int a,b,c=1;
	scanf("%d",&a);
	if(a>=3)
	{
		for(b=2;b<a-1;b=b+1)
		{
			if(a%b!=0)
			{
				printf("是素数");
				break; 
			}
			else
			{
				printf("不是素数");
				break;
			}
		}
	}
	else
	{
		printf("错误");
	}
	return 0;
 } 
