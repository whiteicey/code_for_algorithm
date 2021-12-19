#include <stdio.h>
int  main ()
{
	int max(int x,int y,int z);
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=max(a,b,c);
	printf("%d\n",d);
	return 0;
}
int max(int x,int y,int z)
{
	int m,n;
	if(x>y)
	{
		if(y>z)
		{
			m=x;
		} 
		else
		{
			if(x>z)
			{
				m=x;
			}
			else
			{
				m=z;
			}
		}
	}
	else
	{
		if(x>z)
		{
			m=y;
		}
		else
		{
			if(y>z)
			{
				m=y;
			}
			else
			{
				m=z;
			}
		}
	}
	return(m);
}
