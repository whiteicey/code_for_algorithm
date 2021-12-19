#include <stdio.h>
int main()
{
	int n,i,temp,index=0,num=0,place[20]={0};
	int light=0;
	scanf("%d",&n);
	int a[20]={0},max[20]={0};
	int count[20]={0};
	for(i=0;i<n;i++)
	{
		light=0;
		if(i==0)
		{
			scanf("%d",&a[i]);
			count[i]++;
		}
		else
		{
			scanf("%d",&temp);
			for(num=0;num<=index;num++)
			{
				if(a[num]==temp)
				{
					light=0;
					count[num]++;
				}
				else
				{
					light=1;
				}
			}
			if(light==1)
			{
				index++;
				a[index]=temp;
				count[index]++;
			}
		}
	}
	
	
	num=0;
	int index1=0;
	for(i=0;i<index;i++)
	{
		if(max[num]<count[i])
		{
			for(index1=0;index1<=num;index1++)
			{
				max[index1]=0;
				place[index1]=0;
			}
			num=0;
			max[num]=count[i];
			place[num]=i;
		}
		else if(max[num]==count[i])
		{
			num++;
			max[num]=count[i];
			place[num]=i;
		}
	}
	
	
	int number[20]={0};
	int min;
	if(max[1]==0)
	{
		printf("%d",a[place[0]]);
	}
	else
	{
		for(i=0;i<=num;i++)
		{
			number[i]=a[place[i]];
		}
		min=number[0];
		for(i=0;i<=num;i++)
		{
			if(min>number[i])
			{
				min=number[i];
			}
		}
		printf("%d",min);
	}
	return 0;
}
