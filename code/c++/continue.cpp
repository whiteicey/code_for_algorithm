#include <stdio.h>
int main01()
{
	int i=0;
	while(i<=100)
	{
		if(i%2==0)
		{
			printf("i=%d\n",i);
		}
		i=i+1;
	}
	return 0;
 } 
 
 int main()
 {
 	int i=0;
 	while(i<=100)
 	{
 		if(i%2!=0)
 		{
			i=i+1;
			continue;
		 }
		 printf("i=%d\n",i);
		 i=i+1;
	 }
	 return 0;
 }
