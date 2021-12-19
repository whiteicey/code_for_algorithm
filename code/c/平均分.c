#include <stdio.h>
int main()
{
	float average(float array[],int n);
	float score[20],aver;
	int i;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",score[i]);
	}
	aver=average(score,n);
	printf("%.2f",aver);
	return 0;
}
float average(float array[],int n)
{
	int i;
	float aver,sum=array[0];
	for(i=1;i<n;i++)
	{
		sum=sum+array[i];
	}
	aver=sum/n;
	return aver;
}
