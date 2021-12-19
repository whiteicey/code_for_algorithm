#include <stdio.h>
struct appletree
{
	int sum;
	int loss[100];
	int real;
	int loss_sum;
};
int main()
{
	int i,j;
	int n,m,index=0;
	scanf("%d%d",&n,&m);
	struct appletree p[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i].sum);
		p[i].real=p[i].sum;
		p[i].loss_sum=0;
		for(j=0;j<m;j++)
		{
			scanf("%d",&p[i].loss[index]);
			p[i].real+=p[i].loss[index];
			p[i].loss_sum+=p[i].loss[index];
			index++;
		}
		index=0;
	}
	int sum=0,max=p[0].loss_sum;
	index=0;
	for(i=0;i<n;i++)
	{
		sum+=p[i].real;
		 if(max>p[i].loss_sum)
		 {
		 	max=p[i].loss_sum;
		 	index=i;
		 }
	}
	printf("%d %d %d",sum,index+1,p[index].loss_sum*(-1));
	return 0;
}
