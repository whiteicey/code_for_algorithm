#include <stdio.h>
/*int main()
{
	int i=0;
	do
	{
		printf("%d\n",i);
	}
	i=i+1;
	while(i<=10);
	return 0;
 } 
 */
 int main()
 {
 	int i=100;
 	int a,b,c;
 	do
 	{
 		a=i/100;
 		b=i/10%10;
 		c=i%10;
 		if(a*a*a+b*b*b+c*c*c==i)
 		{
 			printf("Ë®ÏÉ»¨£º%d\n",i);
		 }
		i=i+1;
	 }
	 while(i<=999);
	 return 0;
 }
