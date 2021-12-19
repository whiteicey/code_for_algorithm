#include <stdio.h>
struct student
{
	int first;
	int second;
	int third;
	int forth;
	int fifth;
	char id[10];
}stu;
int main()
{
	int n,i,index=0,num=0;
	float ave,sum=0;
	scanf("%d",&n);
	struct student p[n];//为什么不能声明为struct stu p[n]; 
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%d%d%d",&p[i].id,&p[i].first,&p[i].second,&p[i].third,&p[i].forth,&p[i].fifth);
	}
	
	for(i=0;i<n;i++)
	{
		sum+=p[i].first;
	}
	ave=sum/n;
	printf("%.2f\n",ave);
	
	for(i=0;i<n;i++)
	{
		index=0;
		if(p[i].first<60)
		{
			index++;
		}
		if(p[i].second<60)
		{
			index++;
		}
		if(p[i].third<60)
		{
			index++;
		}
		if(p[i].forth<60)
		{
			index++;
		}
		if(p[i].fifth<60)
		{
			index++;
		}
		if(index>=2)
		{
			printf("%s ",p[i].id);
			num++;
		}
	}
	if(num==0)
	{
		printf("no");
	}
	printf("\n");
	num=0;
	
	for(i=0;i<n;i++)
	{
		sum=0;
		sum=p[i].first+p[i].second+p[i].third+p[i].forth+p[i].fifth;
		ave=sum/5;
		if(ave>90)
		{
			printf("%s ",p[i].id);
			num++;
		}
	}
	if(num==0)
	{
		printf("no");
	}
	return 0;
}
