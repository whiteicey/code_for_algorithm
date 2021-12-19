#include <cstdio>
using namespace std;
int main()
{
	int a,b,c,sum;
	while(~scanf("%d%d%d",&a,&b,&c))
	{
		sum=a*70+b*21+c*15;
		if(sum<=105)
		{
			printf("%d\n",sum);
		}
		else
		{
			while(sum>105)
			{
				sum-=105;
			}
			printf("%d\n",sum);
		} 
	}
	return 0;
}
