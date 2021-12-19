#include <cstdio>
using namespace std;
int gcd(int x, int y)
{	
	int z = y;
	while(x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	}
	return z;
}
int main()
{
	int ang,n;
	scanf("%d",&n);
	while(n)
	{
		int temp;
		scanf("%d",&ang);
		temp=gcd(ang,180);
		printf("%d\n",180/temp);
		n--;
	}
	return 0;
}

