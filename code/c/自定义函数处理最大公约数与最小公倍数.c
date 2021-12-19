#include <stdio.h>
int main()
{
	int max(int x,int y);
	int min(int x,int y);
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	c=max(a,b);
	d=min(a,b);
	printf("%d %d",c,d);
 } 
 int max(int x,int y)
 {
 	while(x!=y)
 	{
 		if(x>y)
 		{
 			x=x-y;
		}
		else
		{
			y=y-x;
		}
	}
	return x;
 }
 int min(int x,int y)
 {
 	int z,c;
 	c=max(x,y);
 	z=x*y/c;
 	return z;
 }
