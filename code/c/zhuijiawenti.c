#include <stdio.h>
int main()
{
	int a[100000]={0};
	int n,i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int result,times=1;
	result=a[0];
	for(i=0;i<=(n/2);i++)
	{
		result=a[i];
		times=1;
		for(j=0;j<n;j++)
		{
			if(a[j]==result)
			{
				times++;
			}
			else
			{
				times--;
			}
		}
		if(times>0&&temp!=result)
		{
			printf("%d",result);
			temp=result;
		}
		
	}
	return 0;
}
