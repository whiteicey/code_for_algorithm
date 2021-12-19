#include <stdio.h>
#include <string.h>
int map[100][100];
int vis1[100],vis2[100];
int que[1000];
int sum,j;
int m,n;
void dfs(int cur)
{
	int i=0;
	printf("%d ",cur);
	//sum++;
	if(sum==n)
	{
		return ;
	}
	for(i=0;i<n;i++)
	{
		if(map[cur][i]==1&&vis1[i]==0)
		{
			vis1[i]=1;
			dfs(i);
		}
	}
	return ;
}
int main()
{
	int i,cur;
	memset(map,0,sizeof(map));
	memset(vis1,0,sizeof(vis1));
	scanf("%d%d",&m,&n);
	for(i=0;i<n;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		map[a][b]=1;
		map[b][a]=1;
	}
	vis1[0]=1;
	dfs(0);
	printf("\n");
	
	memset(que,0,sizeof(que));
	memset(vis2,0,sizeof(vis2));
	int tail=0;
	int head=0;
	que[tail]=0;
	tail++;
	vis2[0]=1;
	while(head<tail)
	{
		cur=que[head];
		for(i=0;i<n;i++)
		{
			if(map[cur][i]==1&&vis2[i]==0)
			{
				que[tail]=i;
				tail++;
				vis2[i]=1;
			}
			if(tail>n)
			{
				break;
			}
		}
		head++;
	}
	for(i=0;i<tail;i++)
	{
		printf("%d ",que[i]);
	}
	printf("\n");
	
	int t;
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		map[t][i]=0;
		map[i][t]=0;
	}
	memset(vis1,0,sizeof(vis1));
	vis1[0]=1;
	dfs(0);
	printf("\n");
	
	memset(que,0,sizeof(que));
	memset(vis2,0,sizeof(vis2));
	tail=0;
	head=0;
	que[tail]=0;
	tail++;
	vis2[0]=1;
	while(head<tail)
	{
		cur=que[head];
		for(i=0;i<n;i++)
		{
			if(map[cur][i]==1&&vis2[i]==0)
			{
				que[tail]=i;
				tail++;
				vis2[i]=1;
			}
			if(tail>n)
			{
				break;
			}
		}
		head++;
	}
	for(i=0;i<tail;i++)
	{
		printf("%d ",que[i]);
	}
	return 0;
}
