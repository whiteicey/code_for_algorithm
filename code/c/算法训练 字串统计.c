#include <stdio.h>
#include <string.h>
int main()
{
	int n,len,i=0,k=0,j,light=0;
	int index1=0,index2=0,index=0;
	int count[100]={0},max;
	char a[100]={'\0'};
	char temp1[100]={'\0'},temp[100][100]={'\0'};
	scanf("%d",&n);
	scanf("%s",a);
	len=strlen(a);
	while(i<len)
	{
		for(j=i;j<n+i;j++)
		{
			temp1[index2]=a[j];
			index2++;
		}
		temp1[index2]='\0';
		if(i==0)
		{
			strcpy(temp[index1],temp1);
			count[index1]++;
			//index1++;
		}
		else
		{
			for(k=0;k<=index1;k++)
			{
				if(strcmp(temp[k],temp1)==0)
				{
					count[k]++;
					light=0;
					break;
				}
				else
				{
					light=1;
				}
			}
			if(light==1)
			{
				index1++;
				strcpy(temp[index1],temp1);
				count[index1]++;
			}
		}
		i++;
		index2=0;
	}
	max=count[0];
	for(i=0;i<=index1;i++)
	{
		if(max<count[i])
		{
			max=count;
			index=i;
		}
	}
	printf("%s",temp[index]);
	return 0;
}
