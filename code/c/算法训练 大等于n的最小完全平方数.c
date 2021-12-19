#include <stdio.h>
int main()
{
	long long m,i,index;
	scanf("%lld",&m);
	for(i=0;;i++)
	{
		if(i*i>=m)
		{
			index=i*i;
			break;
		}
	}
	printf("%lld",index);
	return 0;
}
