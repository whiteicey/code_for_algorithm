#include <stdio.h>
int main()
{
	int t,n,i=1,j,num=0;
	int temp;
	scanf("%d",&t);
	while(i<=t)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&temp);
			if(temp>0)
			{
				num++;
			}
		}
		printf("%d\n",num);
		num=0;
		i++;
	}
	return 0;
}
