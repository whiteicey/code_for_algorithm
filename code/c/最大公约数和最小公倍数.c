#include <stdio.h>
int main()
{
	int a,b,c,d,m1,n1,m2,n2,a1,b1,c1,d1,sum1,sum2;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&c,&d);
	a1=a;
	b1=b;
	c1=c;
	d1=d;
	if(a>b)
	{
		if(a%b==0)
		{
			m1=b;
			n1=(a1*b1)/b;
		}
		else
		{
			for(;b>=1;b--)
			{
				if(a%b==0&&b1%b==0)
				{
					m1=b;
					n1=(a1*b1)/b;
					break;
				}
			}
		}
	}
	else
	{
		if(b%a==0)
		{
			m1=a;
			n1=(a1*b1)/a;
		}
		else
		{
			for(;a>=1;a--)
			{
				if(b%a==0&&a1%a==0)
				{
					m1=a;
					n1=(a1*b1)/a;
					break;
				}
			}
		}
	}
	if(c>d)
	{
		if(c%d==0)
		{
			m2=d;
			n2=(c1*d1)/d;
		}
		else
		{
			for(;d>=1;d--)
			{
				if(c%d==0&&d1%d==0)
				{
					m2=b;
					n2=(c1*d1)/d;
					break;
				}
			}
		}
	}
	else
	{
		if(d%c==0)
		{
			m2=a;
			n2=(c1*d1)/c;
		}
		else
		{
			for(;c>=1;c--)
			{
				if(d%c==0&&c1%c==0)
				{
					m2=c;
					n2=(c1*d1)/c;
					break;
				}
			}
		}
	}
	sum1=m1+m2;
	sum2=n1+n2;
	printf("%d\n%d",sum1,sum2);
	return 0;
 } 
