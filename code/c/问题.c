#include <stdio.h>
int main()
{
	long long n,index,a;
	scanf("%d",&n);
	index=n;
	long long num=0,temp;
	while(n!=0)
	{
		if(n==index)
		{
			scanf("%d",&a);
			num++;
		}
		else
		{
			scanf("%d",&temp);
			if(temp==a)
			{
				num++;
			}
			else
			{
				num--;
			}
			if(num==0)
			{
				a=temp;
				num++;
			}
		}
		n--;
	}
	printf("%d",a);
	return 0;
}
