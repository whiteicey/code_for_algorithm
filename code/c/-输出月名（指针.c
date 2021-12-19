#include <stdio.h>
int main()
{
	char* lunar[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int month;
	scanf("%d",&month);
	if(month>=1&&month<=12)
	{
		printf("%s",lunar[month-1]);
	}
	else
	{
		printf("error");
	}
	return 0;
}
