#include <stdio.h>
#include <math.h>
int main()
{
	int a[100];
	int n;
	int i,j;
	int temp;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(abs(a[i])<abs(a[j]))
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(i) printf(" ");
			printf("%d",a[i]);
		}
		printf("\n");
	} 
	return 0;
}
