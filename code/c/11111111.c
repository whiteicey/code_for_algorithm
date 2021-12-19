#include <stdio.h>
struct student
{
	char id[10];
	int a[4];
	int min;
	int sum;
};
int main()
{
	int n,i,j,k,temp1;
	struct student stu[10];
	struct student temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%d%d",&stu[i].id,&stu[i].a[0],&stu[i].a[1],&stu[i].a[2],&stu[i].a[3]);
		for(j=0;j<4;j++)
		{
			for(k=0;k<4;k++)
			{
				if(stu[i].a[j]>stu[i].a[k])
				{
					temp1=stu[i].a[j];
					stu[i].a[j]=stu[i].a[k];
					stu[i].a[k]=temp1;
				}
			}
		}
		stu[i].sum=stu[i].a[0]+stu[i].a[1]+stu[i].a[2];
		stu[i].min=stu[i].a[3];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(stu[i].sum>stu[j].sum)
			{
				temp=stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}
			else if(stu[i].sum==stu[j].sum)
			{
				if(stu[i].min<stu[j].min)
				{
					temp=stu[i];
					stu[i]=stu[j];
					stu[j]=temp;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s %d\n",stu[i].id,stu[i].sum);
	}
	return 0;
}
