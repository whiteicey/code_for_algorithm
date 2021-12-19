#include <stdio.h>
struct time
{
	int year;
	int month;
	int day;
}stu;
int main()
{
	int sum;
	scanf("%d%d%d",&stu.year,&stu.month,&stu.day);
	if(stu.year%4==0||(stu.year%100==0&&stu.year%400==0))
	{
		switch(stu.month)
		{
			case 1:sum=stu.day;break;
			case 2:sum=31+stu.day;break;
			case 3:sum=31+29+stu.day;break;
			case 4:sum=31+29+31+stu.day;break;
			case 5:sum=31+29+31+30+stu.day;break;
			case 6:sum=31+29+31+30+31+stu.day;break;
			case 7:sum=31+29+31+30+31+30+stu.day;break;
			case 8:sum=31+29+31+30+31+30+31+stu.day;break;
			case 9:sum=31+29+31+30+31+30+31+31+stu.day;break;
			case 10:sum=31+29+31+30+31+30+31+31+30+stu.day;break;
			case 11:sum=31+29+31+30+31+30+31+31+30+31+stu.day;break;
			case 12:sum=31+29+31+30+31+30+31+31+30+31+30+stu.day;break;
		}
	}
	else
	{
		switch(stu.month)
		{
			case 1:sum=stu.day;break;
			case 2:sum=31+stu.day;break;
			case 3:sum=31+28+stu.day;break;
			case 4:sum=31+28+31+stu.day;break;
			case 5:sum=31+28+31+30+stu.day;break;
			case 6:sum=31+28+31+30+31+stu.day;break;
			case 7:sum=31+28+31+30+31+30+stu.day;break;
			case 8:sum=31+28+31+30+31+30+31+stu.day;break;
			case 9:sum=31+28+31+30+31+30+31+31+stu.day;break;
			case 10:sum=31+28+31+30+31+30+31+31+30+stu.day;break;
			case 11:sum=31+28+31+30+31+30+31+31+30+31+stu.day;break;
			case 12:sum=31+28+31+30+31+30+31+31+30+31+30+stu.day;break;
		}
	}
	printf("%d",sum);
	return 0;
}
