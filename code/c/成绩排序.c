#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,j;
	int temp[21];
	char id[10][21];
	char name[10][21];
	int math[10],english[10],computer[10];
	int sum[10];
	float ave[3]={0};
	for(i=0;i<3;i++)
	{
		scanf("%s%s%d%d%d",id[i],name[i],&math[i],&english[i],&computer[i]);
		sum[i]=math[i]+english[i]+computer[i];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(sum[i]>sum[j])
			{
				strcpy(temp,id[j]);
				strcpy(id[j],id[i]);
				strcpy(id[i],temp);
				
				strcpy(temp,name[j]);
				strcpy(name[j],name[i]);
				strcpy(name[i],temp);
				
				t=math[j];
				math[j]=math[i];
				math[i]=t;
				
				t=english[j];
				english[j]=english[i];
				english[i]=t;
				
				t=computer[j];
				computer[j]=computer[i];
				computer[i]=t;
				
				t=sum[j];
				sum[j]=sum[i];
				sum[i]=t;
			}
		}
	}
	ave[0]=(math[0]+math[1]+math[2])/3.0;
	ave[1]=(english[0]+english[1]+english[2])/3.0;
	ave[2]=(computer[0]+computer[1]+computer[2])/3.0;
	printf("NO   Name   Maths   English   Computer   Total\n");
	for(i=0;i<3;i++)
	{
		printf("%s    %s    %d    %d    %d    %d\n",id[i],name[i],math[i],english[i],computer[i],sum[i]);
	}
	printf("average of Maths:%.2f\n",ave[0]);
	printf("average of English:%.2f\n",ave[1]);
	printf("average of Computer:%.2f\n",ave[2]);
	return 0;
}

/*
1001   zhang    90    80    88
1002   huang    78     80    82
1003   xiong    88     85    80
*/

