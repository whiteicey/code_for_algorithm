#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
int main()
{
	int hour,minute;
	int num=0;
	cin>>hour;
	getchar();
	cin>>minute;
	if(hour>=12&&hour<24) 
	{
		if(minute>0)
		{
			num=hour%12+1;
		}	
		else
		{
			num=hour%12;
		}		
	}
	if (num==0)
	{
		printf("Only %02d:%02d.  Too early to Dang.",hour,minute);
	}		
	else
	{
		for (int i=0;i<num;i++)
		{
			printf("Dang");
		}		
	}
	return 0;
}
