#include <cstdio>
#include <math.h>
using namespace std;
int bin[32]={0};
void dec2bin(int num)
{
    for(int i = 31; i>=0; i--)
	{
        if(num&1==1)
            bin[i]=1;
        else
            bin[i]=0;
        num=num>>1;
    }
}
int main()
{
	int n,i;
	while(~scanf("%d",&n))
	{
		int sum=0,temp=0;
//		for(i=31;i>=0;i--)
//		{
//			printf("%d",bin[i]);
//		}
//		printf("\n");
		dec2bin(n);
		for(i=31;i>=0;i--)
		{
			if(temp<7)
			{
				if(bin[i]!=0)
				{
					sum+=pow(2,temp);
					temp++;
					continue;
				}
				else
				{
					temp++;
					continue;
				}
			}
			else
			{
				if(bin[i]!=0)
				{
					sum+=pow(2,temp);
					temp=0;
					continue;
				}
				else
				{
					temp=0;
					continue;
				}
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
