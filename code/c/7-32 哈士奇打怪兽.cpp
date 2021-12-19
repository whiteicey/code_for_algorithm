#include <cstdio>
using namespace std;
int main()
{
	int x1,y1,x2,y2;
	while(~scanf("%d%d%d%d",&x1,&y1,&x2,&y2))
	{
		while(1)
		{
			x2-=y1;
			if(x2<=0&&x1>0)
			{
				printf("hsqwin\n");
				break;
			}
			x1-=y2;
			if(x1<=0&&x2>0)
			{
				printf("hsqlose\n");
				break;
			}
		}
	}
	return 0;
}
