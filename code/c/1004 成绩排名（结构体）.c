#include <stdio.h>
struct node
{
	char name[11];
	char sno[11];
	int grade;
};
int main()
{
	int a,i,temp,max,min;
	int j1=0,j2=0;
	scanf("%d",&a);
	struct node p[a];
	for(i=0;i<a;i++)
	{
		scanf("%s%s%d",&p[i].name,&p[i].sno,&p[i].grade);
	}
	min=max=p[0].grade;
	for(i=0;i<a;i++)
	{
		if(max<p[i].grade)
		{
			max=p[i].grade;
			j1=i;
		}
		if(min>p[i].grade)
		{
			min=p[i].grade;
			j2=i;
		}
	}
	printf("%s %s\n",p[j1].name,p[j1].sno);
    printf("%s %s",p[j2].name,p[j2].sno);
}

