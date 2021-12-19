#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	i=j=k=m=n=0;
	int peo,where;
	scanf("%d",&peo);
	int all[peo];
	for(i=0;i<peo;i++)
	{
		scanf("%d",&all[i]);
	}
	where=0;
	while(peo!=1)
	{
		where=(where+all[where])%peo;
		if(where==peo-1)
		{
			peo--;continue;
		}
		else
		{
			while(where!=peo-1)
			{
				all[where]=all[where+1];
				where++;
			}
			peo--;continue;
		}
	}
	printf("%d\n",all[0]);
}
