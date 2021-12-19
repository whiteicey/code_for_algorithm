#include <cstdio>
using namespace std;
int main()
{
	int n,sum=0,temp=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp*=i;
		sum+=temp;
	}
	printf("m=%d",sum);
	return 0;
}
