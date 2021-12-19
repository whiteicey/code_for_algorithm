#include <stdio.h>
int main01()
{
	int i,j;
	for(i=0;i<10;i=i+1)
	{
		for(j=0;j<10;j=j+1)
		{
			if(j>i)
			{
				break;
			}
			printf("i=%d,j=%d\n",i,j);
		}
	}
	return 0; 
 } 
 
 int main()
 {
 	int i,j,k;
 	for(i=0;i<24;i=i+1)
 	{
 		for(j=0;j<60;j=j+1)
 		{
 			for(k=0;k<60;k=k+1)
 			{
 				printf("%d  :  %d  :  %d\n",i,j,k);
			 }
		}
	 }
	 return 0;
 }
