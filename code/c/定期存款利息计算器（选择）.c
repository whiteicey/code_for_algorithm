#include <stdio.h>
int main()
{
	double i,n,sum;
	int year;
	scanf("%lf%d",&i,&year);
	switch(year)
	{
		case 1:
			{
				n=i*0.031*0.25;
				sum=n+i;
				printf("%.2lf\n%.2lf",n,sum);
				break;
			}
		case 2:
			{
				n=i*0.033*0.5;
				sum=n+i;
				printf("%.2lf\n%.2lf",n,sum);
				break;
			}
		case 3:
			{
				n=i*0.035*1;
				sum=n+i;
				printf("%.2lf\n%.2lf",n,sum);
				break;
			}
		case 4:
			{
				n=i*0.044*2;
				sum=n+i;
				printf("%.2lf\n%.2lf",n,sum);
				break;
			}
		case 5:
			{
				n=i*0.05*3;
				sum=n+i;
				printf("%.2lf\n%.2lf",n,sum);
				break;
			}
		case 6:
			{
				n=i*0.055*5;
				sum=n+i;
				printf("%.2lf\n%.2lf",n,sum);
				break;
			}	
	}
	return 0;
}
