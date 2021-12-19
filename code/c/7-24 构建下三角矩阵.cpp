#include <cstdio>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int map[n][n];
		int i,j,temp=1,index=1;
		for(i=0;i<n;i++)
		{
			index=i+1;
			for(j=0;j<n;j++)
			{
				if(j<index)
				{
					printf("%3d",temp);
					temp++;
				}
				else
				{
					printf("%3d",0);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
