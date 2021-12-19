#include <stdio.h>
#include <string.h>
int main()
{
	int n,ch[10],math[10],en[10],id[10],temp1,rank=1,i,sum[10]={0},j;
	char name[10][5],temp[5];
	scanf("%d",&n);
	if(n<10)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d%s%d%d%d",&id[i],&name[i],&math[i],&en[i],&ch[i]);
			sum[i]=math[i]+en[i]+ch[i];
		}
		for(i=0;i<10;i++)
		{
			for(j=i+1;j<10;j++)
			{
				if(sum[i]<sum[j])
				{
					temp1=id[i];
					id[i]=id[j];
					id[j]=temp1;
					
					temp1=math[i];
					math[i]=math[j];
					math[j]=temp1;
					
					temp1=en[i];
					en[i]=en[j];
					en[j]=temp1;
					
					temp1=ch[i];
					ch[i]=ch[j];
					ch[j]=temp1;
					
					strcpy(temp,name[i]);
					strcpy(name[i],name[j]);
					strcpy(name[j],temp);
					
					temp1=sum[i];
					sum[i]=sum[j];
					sum[j]=temp1;
				}
				else if(sum[i]=sum[j]&&id[i]>id[j])
				{
					temp1=id[i];
					id[i]=id[j];
					id[j]=temp1;
					
					temp1=math[i];
					math[i]=math[j];
					math[j]=temp1;
					
					temp1=en[i];
					en[i]=en[j];
					en[j]=temp1;
					
					temp1=ch[i];
					ch[i]=ch[j];
					ch[j]=temp1;
					
					strcpy(temp,name[i]);
					strcpy(name[i],name[j]);
					strcpy(name[j],temp);
					
					temp1=sum[i];
					sum[i]=sum[j];
					sum[j]=temp1;
				}
			}
		}
		for(i=0;i<n;i++)
		{

			if(sum[i]==sum[i+1])
			{
				printf("%4d",rank);
			}
			else
			{
				rank=rank+i;
				printf("%4d",rank);
			}
			printf("%10d%10s%5d%5d%5d\n",id[i],name[i],math[i],en[i],ch[i]);
		}
	}
	else
	{
		printf("Please input 1-9");
	}
	return 0;
}
