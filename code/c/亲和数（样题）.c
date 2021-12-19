#include <stdio.h>
int main()
{
	int a,i,sum=0,j;
	int num[10][2]={0};
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d%d",&num[i][0],&num[i][1]);
	}
	i=0;
	while(i<a)
	{
		sum=0;
		for(j=1;j<num[i][0];j++)
		{
			if(num[i][0]%j==0)
			{
				sum+=j;
			}
		}
		if(sum==num[i][1])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		i++;
	}
	return 0;
}
