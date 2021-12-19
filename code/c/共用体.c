#include <stdio.h>
struct form
{
	int num;
	char name[10];
	char sex;
	char job;
	union
	{
		int banji;
		char position[10];
	}category;
};
int main()
{
	int i,n;
	scanf("%d",&n);
	struct form p[n];
	for(i=0;i<n;i++)
	{
		scanf("%d%s%s%s",&p[i].num,&p[i].name,&p[i].sex,&p[i].job);
		if(p[i].job=='s')
		{
			scanf("%d",&p[i].category.banji);
		}
		else if(p[i].job=='t')
		{
			scanf("%s",&p[i].category.position);
		}
		else
		{
			printf("input error");
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d %s %c %c ",p[i].num,p[i].name,p[i].sex,p[i].job);
		if(p[i].job=='s')
		{
			printf("%d\n",p[i].category.banji);
		}
		else if(p[i].job=='t')
		{
			printf("%s\n",p[i].category.position);
		}
	}
	return 0;
}
