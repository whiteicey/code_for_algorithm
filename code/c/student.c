#include <stdio.h>

int main(){
	int n,tmp,rank=1;
	int i,j;
	int id[10],ch[10],math[10],en[10];
	char name[10][10];
	int total[10],index[10]={0,1,2,3,4,5,6,7,8,9};//index用来储存排序后的数组下标
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s%d%d%d",&id[i],&name[i],&ch[i],&math[i],&en[i]);
	}
	for(i=0;i<n;i++)
	{
		total[i]=ch[i]+math[i]+en[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(total[index[i]]<total[index[j]])
			{
				tmp=index[i];
				index[i]=index[j];
				index[j]=tmp;
			}
			else if((total[index[i]]==total[index[j]])&&(id[index[i]]>id[index[j]]))
			{
				tmp=index[i];
				index[i]=index[j];
				index[j]=tmp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("%4d",rank);
		}
		if(i>0)
		{
			if(total[index[i]]==total[index[i-1]])
			{
				printf("%4d",rank);
			}
			else
			{
				rank=i+1;//这里是个小技巧，你思考一哈嘛			
				printf("%4d",rank);				
			}
		}
		printf("%10d%10s%5d%5d%5d\n",id[index[i]],name[index[i]],ch[index[i]],math[index[i]],en[index[i]]);
	}
	return 0;
}
