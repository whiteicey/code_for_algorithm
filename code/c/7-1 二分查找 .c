#include <stdio.h>
int search(int k,int data[],int high)
{
	int low=0;
	high=high-1;
	int mid;
	while(low<=high)
	{
		mid=(high+low)/2;   
		if(k==data[mid]) 
		{
			return mid;
		}
		else if(k<data[mid]) 
		{
			high=mid-1;
		}
		else 
		{
			low=mid+1;
		}
	}
	return -1;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100000];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int index,k;
	for(i=0;i<m;i++)
	{
		scanf("%d",&k);
		index=search(k,a,n);
		if(index!=-1)
		{
            if(i==0)
            {
                printf("%d",index);
            }
            else
            {
                printf(" %d",index);
            }
			
		}
	}
	return 0;
}
