#include <cstdio>
using namespace std;
int find (int n,int f1,int a,int b,int m)
{
	if(n-m==1)
	{
		return a*f1+b;
	}
	else
	{
		m++;
		f1=a*f1+b;
		find(n,f1,a,b,m);
	}
}
int main()
{
	int n,f1,a,b;
	while(~scanf("%d%d%d%d",&n,&f1,&a,&b))
	{
		if(n==1)
		{
			printf("%d\n",f1);
			continue;
		}
		else
		{
			int m=1;
			printf("%d\n",find(n,f1,a,b,m));
		}
	}
	return 0;
}
