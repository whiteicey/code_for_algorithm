#include <stdio.h>
void divide(float a);
int main()
{
	float a;
	scanf("%f",&a);
	divide(a);
	return 0;
}
void divide(float a)
{
	int i,k=1;
	//a=(int)a;
	if(a<=1)
	{
		printf("error");
	}
	else
	{
		for(i=2;i<(int)a;i++)
		{
			if((int)a%i!=0)
			{
				k=1;
			}
			else
			{
				k=0;
				printf("NO");
				break;
			}
		}
		if(k==1)
		{
			printf("YES");
		}
	}
}
