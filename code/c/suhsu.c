#include <stdio.h>
#define MAX 1000001
long num[MAX];
int flag[MAX];
int main()
{
	flag[0]=1;
	flag[1]=1;
	long x=2,j,k=1,i=0;
	for(x=2;x<MAX;x++)
	{
		if(flag[x]==0)
		{
			num[x]=k++;
			for(j=2*x;j<MAX;j+=x)
			{
				flag[j]=1;
			}
		}
	}
	while(~scanf("%ld",&i))
	{
		if(flag[i]==0)
		{
			printf("%ld\n",num[i]);
		}
		else
		{
			while(flag[i]==1)
			{
				i--;
			}
			printf("%ld\n",num[i]);
		}
	}
	return 0;
}
