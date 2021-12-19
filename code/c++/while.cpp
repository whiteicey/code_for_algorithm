#include <stdio.h>
int main01()
{
	int i=0;
	while(i<10)
	{
		printf("i=%d\n",i);
		i=i+1;
	}
	return 0;
 } 
 
 int main02()
 {
 	int i=0;
 	int sum=0;
 	while(i<=100)
 	{
 		sum = sum + i;
 		i = i+1;
	 }
	 printf("sum:%d\n",sum);
	 return 0;
 }
 
int main()
{
 	int i=100;
 	int a,b,c;
 	while(i<=999)
 	{
 		a=i/100;//百位 
 		b=i/10%10;//十位 
 		c=i%10;//个位 
 		if(a*a*a+b*b*b+c*c*c==i)
 		{
		 	printf("水仙花数：%d\n",i);
		}
		i=i+1;
	}
	return 0;
}
