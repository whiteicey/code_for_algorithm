#include <stdio.h>
int main()
{
	int n,i=0,j,temp,time,num=1,index;
	int time_s[100]={0},time_e[100]={0},less[100]={0};
	scanf("%d",&n);
	while(n)
	{
		scanf("%d",&time_s[i]);
		if(time_s[i]==0&&i==n)
		{
			break;
		}
		scanf("%d",&time_e[i]);
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(time_e[i]<time_e[j])
			{
				temp=time_e[i];
				time_e[i]=time_e[j];
				time_e[j]=temp;
				
				temp=time_s[i];
				time_s[i]=time_s[j];
				time_s[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		less[i]=time_e[i]-time_s[i];
	}
	time=0;
	index=0;
	time=time_e[index];
//	while(time<=24)
//	{
		for(i=0;i<n;i++)
		{
			if(time_s[i]>=time)
			{
				time=time_e[i];
				num++;
				break;
			}
		}
	//	if(i==n)
	//	{
	//		break;
	//	}
	//}
	printf("%d",num);
	return 0;
} 
