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
				printf("������");
				break; 
			}
			else
			{
				printf("��������");
				break;
			}
		}
	}
	else
	{
		printf("����");
	}
	return 0;
 } 
