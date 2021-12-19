#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	char m;
	while(1)
	{
		scanf("%d",&a);
		if(a==0)
		{
			if(m=getchar()=='\n')
			{
				return 0;
			}
		}
		scanf("%di",&b);
		scanf("%d%di",&c,&d);
		if(a+c==0&&b+d==0)
		{
			printf("0\n");
		}
		else if(a+c==0&&b+d!=0)
		{
			printf("%di\n",b+d);
		}
		else if(a+c!=0&&b+d==0)
		{
			printf("%d\n",a+c);
		}
		else if(a+c!=0&&b+d!=0)
		{
			if(b+d>0)
			{
				printf("%d+%di\n",a+c,b+d);
			}
			else
			{
				printf("%d%di\n",a+c,b+d);
			}
		}
	}
}
