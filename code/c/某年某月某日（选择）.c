#include<stdio.h>
int main()
{
	int year,month,day,sum;
	scanf("%d%d%d",&year,&month,&day);
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		switch(month)
		{
			case 1:sum=day;printf("%d",sum);break;
			case 2:sum=31*1+day;printf("%d",sum);break;
			case 3:sum=31*1+29+day;printf("%d",sum);break;
			case 4:sum=31*2+29+day;printf("%d",sum);break;
			case 5:sum=31*2+29+30+day;printf("%d",sum);break;
			case 6:sum=31*3+29+30+day;printf("%d",sum);break;
			case 7:sum=31*3+29+30*2+day;printf("%d",sum);break;
			case 8:sum=31*4+29+30*2+day;printf("%d",sum);break;
			case 9:sum=31*5+29+30*2+day;printf("%d",sum);break;
			case 10:sum=31*5+29+30*3+day;printf("%d",sum);break;
			case 11:sum=31*6+29+30*3+day;printf("%d",sum);break;
			case 12:sum=31*6+29+30*4+day;printf("%d",sum);break;
		}
	}
	else
	{
		switch(month)
		{
			case 1:sum=day;printf("%d",sum);break;
			case 2:sum=31*1+day;printf("%d",sum);break;
			case 3:sum=31*1+28+day;printf("%d",sum);break;
			case 4:sum=31*2+28+day;printf("%d",sum);break;
			case 5:sum=31*2+28+30+day;printf("%d",sum);break;
			case 6:sum=31*3+28+30+day;printf("%d",sum);break;
			case 7:sum=31*3+28+30*2+day;printf("%d",sum);break;
			case 8:sum=31*4+28+30*2+day;printf("%d",sum);break;
			case 9:sum=31*5+28+30*2+day;printf("%d",sum);break;
			case 10:sum=31*5+28+30*3+day;printf("%d",sum);break;
			case 11:sum=31*6+28+30*3+day;printf("%d",sum);break;
			case 12:sum=31*6+28+30*4+day;printf("%d",sum);break;
		}
	}
	return 0;
}
