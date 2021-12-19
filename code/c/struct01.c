#include <stdio.h>
struct date
{
	int month;
	int day;
	int year;
}today,thismonth,day;
int main()
{
	//struct date today;
	struct date today={07,31,2014};
	struct date thismonth={.month=7,.year=2014};
	day=today;
	printf("%d-%d-%d\n",today.year,today.month,today.day);
	printf("%d-%d-%d",day.year,day.month,day.day);
	return 0;
}
