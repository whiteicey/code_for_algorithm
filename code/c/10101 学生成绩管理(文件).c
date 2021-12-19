#include <stdio.h>
#include <string.h>
struct stu
{
	char id[100];
	char name[100];
	int score1;
	int score2;
	int score3;
};
struct change
{
	char cid[100];
	char cname[100];
	int cscore1;
	int cscore2;
	int cscore3;
};
int main()
{
	int n,i;
	scanf("%d",&n);
	struct stu p[n];
	struct change change;
	for(i=0;i<n;i++)
	{
		scanf("%s%s%d%d%d",p[i].id,p[i].name,&p[i].score1,&p[i].score2,&p[i].score3);
	}
	char find[100]={'\0'};
	scanf("%s",find);
	char change_name[100]={'\0'};
	scanf("%s%s%s%d%d%d",change_name,change.cid,change.cname,&change.cscore1,&change.cscore2,&change.cscore3);
	int check;
	scanf("%d",&check);
	for(i=0;i<n;i++)
	{
		if(strcmp(find,p[i].id)==0)
		{
			printf("%s %s %d %d %d\n",p[i].id,p[i].name,p[i].score1,p[i].score2,p[i].score3);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(change_name,p[i].name)==0)
		{
			strcpy(p[i].id,change.cid);
			strcpy(p[i].name,change.cname);
			p[i].score1=change.cscore1;
			p[i].score2=change.cscore2;
			p[i].score3=change.cscore3;
			printf("%s %s %d %d %d\n",p[i].id,p[i].name,p[i].score1,p[i].score2,p[i].score3);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(check==1)
		{
			if(p[i].score1<60)
			{
				printf("%s %d ",p[i].id,p[i].score1);
			}
		}
		else if(check==2)
		{
			if(p[i].score2<60)
			{
				printf("%s %d ",p[i].id,p[i].score2);
			}
		}
		else if(check==3)
		{
			if(p[i].score3<60)
			{
				printf("%s %d ",p[i].id,p[i].score3);
			}
		}
	}
	printf("\n");
	double sum1=0,sum2=0,sum3=0,sumsum=0;
	for(i=0;i<n;i++)
	{
		sum1=sum1+p[i].score1;
		sum2=sum2+p[i].score2;
		sum3=sum3+p[i].score3;
		sumsum=sumsum+p[i].score1+p[i].score2+p[i].score3;
	}
	printf("%.2lf %.2lf %.2lf %.2lf",sum1/n,sum2/n,sum3/n,(sumsum/n)/3);
	return 0;
}
