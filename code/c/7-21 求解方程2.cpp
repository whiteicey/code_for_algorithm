#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double a, b, c, d, x1, x2;                        
    scanf("%lf %lf %lf", &a, &b, &c);
	if(a!=0)
	{
		d = b * b - 4 * a * c;                             
    	//有不等实根的情况
    	if (d > 0)
		{
        	x1 =(((-1)*b+sqrt(d))/(2*a));
        	x2 =(((-1)*b-sqrt(d))/(2*a));
        	printf("%.2lf %.2lf\n", x2, x1);
    	}
    	//有相等实根的情况
    	else if (d == 0)
		{
        	x1 = x2 = (-1) * b / 2 * a;
        	printf("%.2lf %.2lf\n", x1,x2);
    	}
    	//无解的情况
    	else
        	printf("No\n");
	}                  
    else if(a==0&&b!=0)
    {
    	printf("%.2lf\n",c/b);
	}
	else if(a==0&&b==0&&c!=0)
	{
		printf("No\n");
	}
	else
	{
		printf("0.00\n");
	}
    return 0;
}

