#include <stdio.h>
int main()
{
	char id[200][12]={'\0'},id1[12]={'\0'};
	int index[200]={0};
	int month[200]={0},day[200]={0};
	int n,i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d",id[i],&month[i],&day[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(month[i]>month[j])
			{
				temp=month[i];
				month[i]=month[j];
				month[j]=temp;
				
				temp=day[i];
				day[i]=day[j];
				day[j]=temp;
				
				strcpy(id1,id[i]);
				strcpy(id[i],id[j]);
				strcpy(id[j],id1);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(index[i]==0)
		{
			printf("%d %d %s ",month[i],day[i],id[i]);
			for(j=i+1;j<n;j++)
			{
				if(month[i]==month[j]&&day[i]==day[j])
				{
					printf("%s ",id[j]);
					index[j]=1;
				}
			}
			printf("\n");
		}
		else
		{
			continue;
		}
	}
	return 0;
}

