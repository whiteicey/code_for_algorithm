#include"stdio.h"
void fun(int a[],int n)
{
    int i,min,b=0,max,temp;
min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
        if(min>a[i])
        {
            min=a[i];
            b=i;
    }
temp=a[0];a[0]=a[b];a[b]=temp;
        for(i=0;i<n;i++)
        if(max<a[i])
        {
            max=a[i];
             b=i;

        }
        temp=a[n-1];a[n-1]=a[b];a[b]=temp;}
void printfarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    	if(i==0)
    	{
    		printf("%d",a[i]);
		}
		else
		{
			printf(" %d",a[i]);
		}
	}
        
}
int main()
{
    int n,i,a[1000];
    while(~scanf("%d",&n))
    {
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
		}
    	fun(a,n);
   		printfarray(a,n);
   		printf("\n");
	}
    
}
