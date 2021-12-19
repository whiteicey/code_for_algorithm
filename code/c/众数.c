#include <stdio.h>
int main()
{
    int a[100000];
    int i,j,maxcount=0,index=0,count=0,k;
    int n;                                         
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);       
    }
    for(i=0;i<n;i++)
    {
    	for(k=0;k<i;k++)
    	{
    		if(a[k]==a[i])
    		{
    			break;
			}
			else
			{
				for(j=0;j<n;j++)   
       			{
            		if(a[j]==a[i])
            		{
            			count++;
					} 
        		}
        		if(count>maxcount)  
        		{
            		maxcount=count;
            		index=i;        
        		}
        		count=0;     
			}
		}
        
    }
    printf("%d",a[index]);
    return 0;
}
