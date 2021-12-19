#include <stdio.h>
int main()
{
	int a[100];
	int n,num=0;
	while(scanf("%d",&n)==1)
	{
		num=0;
		//scanf("%d",&n);
		int i,j,flag=1;
		for(i=2;i<=n;i++)
		{
			flag=0;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
				else
				{
					flag=0;
				}
			}
			if(flag==0)
			{
				num++;
			}
		}
		printf("%d\n",num);
	}
	return 0;
 } 
