#include <stdio.h>
int main()
{
	char name[1000][11]={'\0'};
	char id[1000][11]={'\0'};
	int n,i,score[10]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s%d",name[i],id[i],&score[i]);
	}
	int max=score[0];
	int min=score[0];
	int index1,index2;
	for(i=0;i<n;i++)
	{
		if(score[i]>max)
		{
			index1=i;
			max=score[i];
		}
		if(score[i]<min)
		{
			index2=i;
			min=score[i];
		}
	}
	printf("%s %s\n",name[index1],id[index1]);
	printf("%s %s\n",name[index2],id[index2]);
	return 0;
}
