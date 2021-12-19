#include <cstdio>
using namespace std;
int w[200010]={0};
int main()
{
	int n,k;
	while(~scanf("%d%d",&n,&k))
	{
		int weather,i,count=0,num=0,last;;
		for(i=0;i<n;i++)
		{
			scanf("%d",&weather);
			if(weather>=0)
			{
				continue;
			}
			else
			{
				w[i]=-1;
				last=i;
				count++;
			}
		}
		if(count>k)
		{
			printf("-1\n");
			continue;
		}
		else
		{
			if(k>n)
			{
				printf("0\n");
			}
			else
			{
				i=0;
				if(w[i]==-1&&i==0)
				{
					num++;
					k--;
					i++;
				}
				while(i<n)
				{
					if(w[i]==-1&&w[i]!=w[i+1])
					{
						num++;
						k--;
						i++;
					}
					else if(w[i]==-1&&w[i]==w[i+1])
					{
						k--;
						i++;
					}
					else if(w[i]==0&&w[i]!=w[i+1])
					{
						num++;
						i++;
					}
					else if(w[i]==0&&w[i]==w[i+1])
					{
						1;
						i++;
					}
					if(i==last&&k>=n-last)
					{
						break;
					}
				}
				printf("%d\n",num);
			}
		}
	}
	return 0;
}
