#include <stdio.h>
int main()
{
	int n,i,j,t;
	scanf("%d",&n);
	int book[101]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		book[t]++;
	}
	for(i=100;i>=0;i--)
	{
		if(book[i]==0)
		{
			continue;
		}
		else
		{
			for(j=0;j<book[i];j++)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
}
