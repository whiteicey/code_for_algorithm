#include <stdio.h>
int guess(int n,int i);
int main()
{
	int n,i=0;
	scanf("%d",&n);
	printf("%d",guess(n,i));
	return 0;
}
int guess(int n,int i)
{
	while(n!=1)
	{
		if(n%2==0)
		{
			n/=2;
			i++;
			if(n==1)
			{
				//printf("%d",i);
				break;
			}
			else
			{
				guess(n,i);
			}
		}
		else
		{
			n=(3*n+1)/2;
			i++;
			if(n==1)
			{
				//printf("%d",i);
				break;
			}
			else
			{
				guess(n,i);
			}
		}
	}
	return i;
}
