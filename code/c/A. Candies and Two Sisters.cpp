#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,i;
	scanf("%d",&n);
	while(n--)
	{
		int m;
		scanf("%d",&m);
		if(m==0||m==1||m==2)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n",m-m/2-1);
		}
	}
	return 0;
}
