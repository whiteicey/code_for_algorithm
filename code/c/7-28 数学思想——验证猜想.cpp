#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n))
	{
		double d,x1,x2;
		d=sqrt(m*m-4*n);
		if(d<0)
		{
			printf("No\n");
		}
		else if(d>0)
		{
			x1=((-1)*m-d)/2;
			x2=((-1)*m+d)/2;
			if((int)x1==x1||(int)x2==x2)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
		else
		{
			x1=((-1)*m-d)/2;
			if((int)x1==x1)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
	}
	return 0;
}
