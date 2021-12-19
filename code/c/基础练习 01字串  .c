#include <stdio.h>
int main()
{
	int a[5]={0};
	int i;
	while(1)
	{
		for(i=0;i<5;i++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
		a[4]++;
		if(a[4]==2)
		{
			a[4]=0;
			a[3]++;
			if(a[3]==2)
			{
				a[3]=0;
				a[2]++;
				if(a[2]==2)
				{
					a[2]=0;
					a[1]++;
					if(a[1]==2)
					{
						a[1]=0;
						a[0]++;
					}
				}
			}
		}
		if(a[0]==1&&a[1]==1&&a[2]==1&&a[3]==1&&a[4]==1)
		{
			for(i=0;i<5;i++)
			{
				printf("%d",a[i]);
			}
			break;
		}
	}
	return 0;
}
