#include <stdio.h>
int unlucky(int w);
int main()
{
	int w;
	scanf("%d",&w);
	unlucky(w);
	return 0;
}
int unlucky(int w)
{
	int month,day;
	for(month=1;month<=12;month++)
	{
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		{
			for(day=1;day<=31;day++)
			{
				if(day==13&&w==5)
				{
					printf("%d\n",month);
				}
				w++;
				if(w==8)
				{
					w=1;
				}
			}
		}
		else if(month==2)
		{
			for(day=1;day<=28;day++)
			{
				if(day==13&&w==5)
				{
					printf("%d\n",month);
				}
				w++;
				if(w==8)
				{
					w=1;
				}
			}
		}
		else
		{
			for(day=1;day<=30;day++)
			{
				if(day==13&&w==5)
				{
					printf("%d\n",month);
				}
				w++;
				if(w==8)
				{
					w=1;
				}
			}
		}
	}
}
