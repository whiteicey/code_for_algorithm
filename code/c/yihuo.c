#include <stdio.h>
int main()
{
	int a[40]={0},b[40]={0},m,n,index[40]={0};
	int i,j,tmp;
	int b_index = 0;
	int number = 0;

	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}//a[] 
	scanf("%d",&n);
	for(i=m;i<m+n;i++)
	{
		scanf("%d",&a[i]);
	}//合并a[] 


	for(i=0;i<m+n;i++)
	{
		for(j=i;j<m+n;j++)
		{	
			if((a[i]==a[j])&&(i!=j))
			{
				index[j]=1;
			}
		}
	}//找到a[]中重复的 并记录位置 


	for(i=0;i<m+n;i++)
	{
		if(index[i]==0)
		{
			b[b_index]=a[i];
			b_index++;
		}
	}//把a[]放进b[] 
	for(i=0;i<m+n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");


	for(i=0;i<m+n;i++)
	{
		if(b[i]!=0)
		{
			number++;
		}
	}//记录b[]中数字位置 


	for(i=0;i<number;i++)
	{
		for(j=i+1;j<number;j++)
		{
			if(b[i]<b[j])
			{
				tmp = b[i];
				b[i]=b[j];
				b[j]=tmp;
			}	
		}
	}//对b[]进行降序排列 


	for(i=0;i<number;i++)
	{
		printf("%d ",b[i]);
	}

	printf("\n");

	/*
	for(i=0;i<m+n;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0;i<number;i++)
	{
		printf("%d ",b[i]);
	}

	for(i=0;i<m+n;i++){
		printf("%d ",index[i]);
	}
	printf("\n");

	printf("\n");
	for(i=0;i<m+n;i++){
		printf("%d ",index[i]);
	}
	printf("\n")
	*/
	return 0;
}
