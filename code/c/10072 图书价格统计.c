#include <stdio.h>
struct lib
{
	char name[31];
	char press[15];
	int num;
	float price;
};
int main()
{
	int n,i,j;
	char temp[31]={'\0'};
	int temp1;
	float temp2,ave,sum=0;
	scanf("%d",&n);
	struct lib p[n];
	for(i=0;i<n;i++)
	{
		scanf("%s%s%d%f",&p[i].name,&p[i].press,&p[i].num,&p[i].price);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i].price>p[j].price)
			{
				strcpy(temp,p[i].name);
				strcpy(p[i].name,p[j].name);
				strcpy(p[j].name,temp);
				
				strcpy(temp,p[i].press);
				strcpy(p[i].press,p[j].press);
				strcpy(p[j].press,temp);
				
				temp1=p[i].num;
				p[i].num=p[j].num;
				p[j].num=temp1;
				
				temp2=p[i].price;
				p[i].price=p[j].price;
				p[j].price=temp2;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%-30s%-20s%-10d%-.2f\n",p[i].name,p[i].press,p[i].num,p[i].price);
		sum+=p[i].num*p[i].price;
	}
	printf("%.2f",sum);
	return 0;
	
}
