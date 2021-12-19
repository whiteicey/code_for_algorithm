#include <stdio.h>
int main()
{
	int m,sum=0,i,j,a[200],k,index=0,num=0;
	scanf("%d",&m);
	for(i=1;i<m;i++)
	{
		for(j=i;j<m;j++)
		{
			sum=sum+j;
			a[index]=j;
			index++;
			if(sum==m)
			{
				num++;
				break;
			}
			if(sum>m)
			{
				break;
			}
		}
		if(sum==m)
		{
			for(k=0;k<index;k++)
			{
				printf("%d ",a[k]);
			}
			printf("\n");
		}
		sum=0;
		index=0;
	}
	if(num==0)
	{
		printf("NONE");
	}
	return 0;
}
