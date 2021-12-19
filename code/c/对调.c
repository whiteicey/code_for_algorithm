#include <stdio.h>
int main()
{
	int a[20],max,min,i,j,k;
	printf("please enter 5 number:\n");
	for(i=0;i<5;i++) 
	{
		scanf("%d",&a[i]);
	}
	max=min=a[0];
		for(i=0;i<5;i++)
		{
			if(min>a[i])
			{
				min=a[i];
				k=i;
			}
		}
		for(i=0;i<5;i++)
		{
	
			if(max<a[i])
			{
				max=a[i];
				j=i;
			}	
		}
		a[k]=max;
		a[j]=min;	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
