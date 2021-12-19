#include <cstdio>
#include <iostream>
using namespace std;
int sushudui[1001]={0};
int sushu[1001]={0};
int main()
{
	int n,i,j,flag,temp=0;
	for(i=2;i<1000;i++)
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
			sushu[i]=1;
		}
	}
	for(i=5;i<1000;i++)
	{
		if(i%2==0)
		{
			sushudui[i]=temp;
			continue;
		}
		else if(sushu[i-2]==1&&sushu[i]==1)
		{
			temp++;
			sushudui[i]=temp;
		}
		else
		{
			sushudui[i]=temp;
			continue;
		}
	}
	while(~scanf("%d",&n))
	{
		printf("%d\n",sushudui[n]);
	}
	return 0;
}
