#include <stdio.h>
int main()
{
	int i=2000;
	for(i=2000;i<=2500;i=i+1)
	{
		if(i%4==0)
		{
			printf("%d是闰年\n",i);
		}
		else
		{
			printf("%d不是闰年\n",i);
		}
		
	 } 
	 return 0;
 } 
