#include <stdio.h>
int main()
{
	int t,i=1,j,k;
	int zi0,mu0,sumzi=0,summu=0,zi1,mu1,zi2,mu2;
	scanf("%d",&t);
	while(i<=t)
	{ 

		scanf("%d/%d%d/%d%d/%d",&zi0,&mu0,&zi1,&mu1,&zi2,&mu2);
		
		if(mu0==mu1)
		{
			sumzi=zi0+zi1;
			summu=mu0;
		}
		else
		{
			sumzi=zi0*mu1+zi1*mu0;
			summu=mu0*mu1;
		}
		if(summu==mu2)
		{
			sumzi+=zi2;
			if(sumzi==summu)
			{
				printf("1");
			}
			else if(sumzi>summu)
			{
				for(j=2;j<summu;j++)
				{
					while(sumzi%j==0&&summu%j==0)
					{
						sumzi/=j;
						summu/=j;
					}
				}
				printf("%d/%d",sumzi,summu);
			}
			else if(sumzi<summu)
			{
				for(j=2;j<sumzi;j++)
				{
					while(sumzi%j==0&&summu%j==0)
					{
						sumzi/=j;
						summu/=j;
					}
				}
				printf("%d/%d",sumzi,summu);
			}
		}
		else
		{
			sumzi=sumzi*mu2+zi2*summu;
			summu=summu*mu2;
			if(sumzi==summu)
			{
				printf("1");
			}
			else if(sumzi>summu)
			{
				for(j=2;j<summu;j++)
				{
					while(sumzi%j==0&&summu%j==0)
					{
						sumzi/=j;
						summu/=j;
					}
				}
				printf("%d/%d",sumzi,summu);
			}
			else if(sumzi<summu)
			{
				for(j=2;j<sumzi;j++)
				{
					while(sumzi%j==0&&summu%j==0)
					{
						sumzi/=j;
						summu/=j;
					}
				}
				printf("%d/%d",sumzi,summu);
			}
		}
		i++;
	}
	return 0;
}
