#include <stdio.h>
int main01()
{
	int i;
	int sum=0;
	for(i=1;i<=100;i=i+1)
	{
		sum = sum+i;
	}
	printf("sum:%d\n",sum);
	return 0;
 } 
 
 int main()
 {
 	int i;
 	for(i=1;i<=100;i=i+1)
 	{
 		if(i%7==0)
 		{
 			printf("i=%d\n",i);
		}
		else
		{
			printf("%d\n",i);
		}
	 }
	 return 0;
 }
