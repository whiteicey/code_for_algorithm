#include <stdio.h>
#include <string.h>
void date(int time)
{
	int monthday1[12]={31,29,31,30,31,30,31,31,30,31,30,31},monthday2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char dayofweek[7][20]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	int year=2000,index=0,month=1,day=1,temp,i;
	char weekday[20];
	temp=time%7;
	strcpy(weekday,dayofweek[temp]);
	int sum=0;
	while(1)
	{
		if(year%4==0||(year%100==0&&year%400==0))
		{
			time-=366;
			year++;
		}
		else
		{
			time-=365;
			year++;
		}
		if(year%4==0||(year%100==0&&year%400==0))
		{
			if(time<366)
			{
				break;
			}
		}
		else
		{
			if(time<365)
			{
				break;
			}
		}
	}
	if(year%4==0||(year%100==0&&year%400==0))
	{
		for(i=0;i<12;i++,month++)
		{
			if(sum<=time)
			{
				sum=sum+monthday1[i];
			}
			else
			{
				break;
			}
		}
		time=time-(sum-monthday1[i-1]);
		day+=time;
	}
	else
	{
		for(i=0;i<12;i++,month++)
		{
			if(sum<time)
			{
				sum=sum+monthday2[i];
			}
			else
			{
				break;
			}
		}
		time=time-(sum-monthday2[i-1]);
		day+=time;
	}
	printf("%d-%02d-%02d %s",year,month-1,day,weekday);
}
int main()
{
	int day[100]={0},i,j;
	scanf("%d",&day[0]);
	while(day[i]!=-1)
	{
		i++;
		scanf("%d",&day[i]);
	}
	int year;
	for(j=0;j<i;j++)
	{
		date(day[j]);
		printf("\n");
	}
	return 0;
}
