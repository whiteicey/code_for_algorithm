#include <stdio.h>
struct stu
{
	char num[20];
	int score1;
	int score2;
	int score3;
	int score4;
	int sum;
	int min;
};
int main()
{
	int m,i,j,k,temp;
	int a[4]={0};
	scanf("%d",&m);
	struct stu p[m];
	struct stu temp1;
	for(i=0;i<m;i++)
	{
		scanf("%s%d%d%d%d",p[i].num,&p[i].score1,&p[i].score2,&p[i].score3,&p[i].score4);
		a[0]=p[i].score1;
		a[1]=p[i].score2;
		a[2]=p[i].score3;
		a[3]=p[i].score4;
		for(j=0;j<4;j++)
		{
			for(k=j;k<4;k++)
			{
				if(a[j]>a[k])
				{
					temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
		}
		p[i].sum=a[1]+a[2]+a[3];
		p[i].min=a[0];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(p[i].sum>p[j].sum)
			{
				temp1=p[i];
				p[i]=p[j];
				p[j]=temp1;
			}
			else if(p[i].sum==p[j].sum)
			{
				if(p[i].min>p[j].min)
				{
					temp1=p[i];
					p[i]=p[j];
					p[j]=temp1;
				}
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%-10s%-6d\n",p[i].num,p[i].sum);
	}
	return 0;
}
