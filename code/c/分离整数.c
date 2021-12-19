#include <stdio.h>
#include <math.h>
int main()
{
	int a,num,b,i,c,k,d,e;
	int sum;
	int temp;
	//int str[20]={0};
	
	scanf("%d",&a);
	b=a;
	e=a;
	i=0;
	while(1)
	{
		//str[i++]=a%10;
		a=a/10;
		num=num+1;
		if(a/10==0)
		{
			//str[i++]=a%10;
			break;
		}
	}
	num=num+1;
	printf("%d\n",num);
	
	temp=num;
	for(i=0;i<num;i++)
	{
		k=pow(10,temp-1);
		c=e/k;
		printf("%d ",c);
		temp--;
		e=e-c*k;
	}
	/*
	for(i=num-1;i>=0;i--)
	{
		printf("%d ",str[i]);
	} */
	printf("\n");
	sum=0;
	temp=1;
	for(i=0;i<num;i++)
	{
		c=b%10;
		b=b/10;
		printf("%d ",c);
	}
	
	return 0;
}

