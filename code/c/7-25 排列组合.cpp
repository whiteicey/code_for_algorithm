#include <cstdio>
using namespace std;
int A (int m,int n)
{
	int i,temp1=1,temp2=1;
	for(i=1;i<=n;i++)
	{
		temp1*=i;
	}
	for(i=1;i<=(n-m);i++)
	{
		temp2*=i;
	}
	return temp1/temp2;
}
int C(int m,int n)
{
	int i,temp1,temp2=1;
	temp1=A(m,n);
	for(i=1;i<=m;i++)
	{
		temp2*=i;
	}
	return temp1/temp2;
}
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n))
	{
		printf("%d %d\n",A(m,n),C(m,n));
	}
	return 0;
}
