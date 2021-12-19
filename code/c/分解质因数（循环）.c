#include <stdio.h>
int main()
{
	int a,i,arr[20],k,j,index;
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			/*for(j=0;j<=19;j++)
			{
				a=a/i;
				printf("%d ",i);
				if(a%i!=0)
				{
					break;
				}	
			}*/
			while(1)
			{
				a=a/i;
				printf("%d ",i);
				if(a%i!=0)
				{
					break;
				}
			}
		}
	}
	return 0;
 } 
