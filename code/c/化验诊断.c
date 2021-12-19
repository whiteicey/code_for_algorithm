#include<stdio.h>
#include<string.h>
struct person
{
	char sex[10];
	double wbc,rbc,hgb,hct,plt;
};
int main()
{
	struct person str;
	int total;
	scanf("%d",&total);
	while(total--)
	{
		int sum=0;
		scanf("%s%lf%lf%lf%lf%lf",str.sex,&str.wbc,&str.rbc,&str.hgb,&str.hct,&str.plt);
		if(str.wbc<4 || str.wbc>10)
			sum++;
		if(str.rbc<3.5 || str.rbc>5.5)
			sum++;
		if(str.plt<100 || str.plt>300)
			sum++;
		if(strcmp(str.sex,"female")==0)
		{
			if(str.hct<36 || str.hct>40)
				sum++;
			if(str.hgb<110 || str.hgb>150)
				sum++;
		}
		if(strcmp(str.sex,"male")==0)
		{
			if(str.hct<42 || str.hct>48)
				sum++;
			if(str.hgb<120 || str.hgb>160)
				sum++;
		}
		if(sum==0)
			printf("normal\n");
		else
			printf("%d\n",sum);
	}
	return 0;
}

