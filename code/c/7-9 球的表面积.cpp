#include <cstdio>
#include <iostream>
#define pi 3.14
using namespace std;
int main()
{
	double n;
	while(~scanf("%lf",&n))
	{
		if(n<0)
		{
			printf("Sorry\n");
		}
		else if(n!=0)
		{
			printf("%.2lf\n",pi*n*n);
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}
