#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main01()
{
	int i;
	srand((unsigned int)time(NULL));
	for(i=0;i<100;i+i+1)
	{
	printf("%d\n",rand()%100);
	} 
	return 0;
 } 
int main()
{
	
}
