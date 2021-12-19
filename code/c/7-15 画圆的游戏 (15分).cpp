#include <cstdio>
using namespace std;
int main()
{
	int x,y,r,i;
	while(~scanf("%d%d%d",&x,&y,&r))
	{
		if(2*r>x||2*r>y)
		{
			printf("It is boring!\n");
		}
		else
		{
			printf("It is so easy!\n");
		}
	}
	return 0;
} 
