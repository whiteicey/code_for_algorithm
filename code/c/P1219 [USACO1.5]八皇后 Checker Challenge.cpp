#include <iostream>
#include <cstdio>
using namespace std;
int a[3][100]={0};
int b[100]={0};
int n,sum=0,i;
void dfs(int step)
{
	//int i;
	if(step>n)
	{
		sum++;
		if(sum<=3)
		{
			for(i=1;i<=n;i++)
			{
				printf("%d ",b[i]);
			}
			printf("\n");
		}	
		return ;
	}
	for(i=1;i<=n;i++)
	{
		if(a[0][i]==0&&a[1][i+step]==0&&a[2][step-i+n]==0)
		{
			b[step]=i;
			a[0][i]=1;
			a[1][i+step]=1;
			a[2][step-i+n]=1;				
			dfs(step+1);
			a[0][i]=0;
			a[1][i+step]=0;
			a[2][step-i+n]=0;
		}
	}	
}
int main()
{
	scanf("%d",&n);
	dfs(1);
	printf("%d",sum);
	return 0;
} 
