#include <stdio.h>
int a[10],n;
void quicksort(int left,int right)
{
	int temp1,i,j,index,temp;
	if(left>right)
	{
		return;
	}
	temp1=a[left];
	index=a[left];
	i=left;
	j=right;
	while(i!=j)
	{
		while(a[j]>=index&&j>i)
		{
			j--;
		}
		while(a[i]<=index&&i<j)
		{
			i++;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	a[left]=a[i];
	a[i]=index;
	quicksort(left,i-1);
	quicksort(i+1,right);
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(0,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}



