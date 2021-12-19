#include <cstdio>
using namespace std;
int divisor(int a,int b)           //自定义函数求最大公约数
{
	int temp;                   //整形零时变量
	if(a<b)                     //a<b 则交换 
	{
		temp=a;a=b;b=temp;
	}
	while(b!=0)
	{
		temp=a%b;              //a中大数除以b中小数循环取余，直到b及余数为0
		a=b;
		b=temp;
	}
	return a;                  //返回最大公约数到调用函数处
}
int main()
{
	int n;
	scanf("%d",&n);
	long long i,a,b,c,d,sum;
	for(i=0;i<n;i++)
	{
		scanf("%lldz%lldm",&a,&b);
		scanf("%lldz%lldm",&c,&d);
		if(b<0)
		{
			b*=-1;
			a*=-1;
		}
		if(d<0)
		{
			d*=-1;
			c*=-1;
		}
		int max=(b*d)/divisor(b,d);
		a=a*(max/b);
		c=c*(max/d);
		sum=a+c;
		if(sum==0)
		{
			printf("0z1m\n");
		}
		else
		{
			if(sum<0)
			{
				sum*=-1;
				printf("%lldz%lldm\n",sum/divisor(sum,max)*(-1),max/divisor(sum,max));
			}
			else
			{
				printf("%lldz%lldm\n",sum/divisor(sum,max),max/divisor(sum,max));
			}
			
		}
	}
	return 0;
}
