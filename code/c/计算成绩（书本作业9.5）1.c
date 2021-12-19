#include <stdio.h>
struct student
{
	char id[6];
	char name[11];
	int first;
	int second;
	int third;
	//float ave;
};
int mian()
{
	float sum,average;
	int n,i;
	scanf("%d",&n);
	struct student p[n];
	for(i=0;i<n;i++)
	{
		scanf("%s%s%d%d%d",&p[i].id,&p[i].name,&p[i].first,&p[i].second,&p[i].third);
		//p[i].ave=(p[i].first+p[i].second+p[i].third)/3.0;
	}
	for(i=0;i<n;i++)
	{
		sum=sum+p[i].first+p[i].second+p[i].third;
	}
	average=sum/(n*3);
	printf("%.2f\n",average);
	for(i=0;i<n;i++)
	{
		printf("5s%10s%5d%5d%5d%8.2f",p[i].id,p[i].name,p[i].first,p[i].second,p[i].third);
	}
	return 0;
}
