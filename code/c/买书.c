#include <stdio.h>
long long a[100000]={0};
void quicksort(int left,int right)
{
    int i,j,t,temp;
    if(left>right)
    { 
       return;
	}
    temp=a[left]; //temp中存的就是基准数
    i=left;
    j=right;
    while(i!=j)
    {
       //顺序很重要，要先从右边开始找
        while(a[j]<=temp && i<j)
        {
    		j--;	
		}
       //再找右边的
        while(a[i]>=temp && i<j)
        {
    		i++;
    	}
       //交换两个数在数组中的位置
       	if(i<j)
     	{
    			t=a[i];
    			a[i]=a[j];
    			a[j]=t;
       	}
    }
    	//最终将基准数归位
    a[left]=a[i];
    a[i]=temp;

    quicksort(left,i-1);//继续处理左边的，这里是一个递归的过程
    quicksort(i+1,right);//继续处理右边的 ，这里是一个递归的过程
}
int main()
{
	long long n,i,j,temp,sum=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	quicksort(0,n);
	for(i=0;i<n;i++)
	{
		if((i+1)%3!=0)
		{
			sum+=a[i];
		}
	}
	printf("%lld",sum);
	return 0;
}
