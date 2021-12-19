#include <stdio.h>
int main()
{
	int m,n,index=0,temp;
	scanf("%d%d",&m,&n);
	int i;
	i=m+1;
	while(index<n)
	{
		if(i%6==0)
		{
			printf("%-11d",i);
			index++;
			i++;
			continue;
		}
		else
		{
			temp=i;
			while(temp!=0)
			{
				if(temp%10==6)
				{
					printf("%-11d",i);
					index++;
					i++;
					break;
				}
				else
				{
					temp/=10;
				}
			}
		}
		i++;
	}
	return 0;
} 
