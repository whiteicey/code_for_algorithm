#include <cstdio>
using namespace std;
int gcd(int num1,int num2)
{
	return num1%num2?gcd(num2,num1%num2):num2;//求最大公约数
}
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n))
	{
		printf("%d\n",m*n/gcd(m,n));
	}
	return 0;
}
