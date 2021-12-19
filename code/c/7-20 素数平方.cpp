#include <cstdio>
#include <algorithm>
#include <math.h> 
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int flag=0;
		for(int i=2;i<sqrt(n);i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("YES %lld\n",n*n);
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
