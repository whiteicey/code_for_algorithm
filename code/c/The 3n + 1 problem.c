#include <stdio.h>
int main()
{
	int a[100][3]={0};
	int i=0,j=0,m,n,temp=0;
	int index=0,index1;
	while(~scanf("%d%d",&a[i][0],&a[i][1]))
	{
		if(a[i][0]<a[i][1])
		{
			for(i=a[i][0];i<=a[i][1];i++)
			{
				index1=i;
				index=0;
				while(i!=1)
				{
					if(i%2==0)
					{
						index++;
						i/=2;
					}
					else
					{
						index++;
						i=i*3+1;
					}
				}
				if(index>=temp)
				{
					temp=index;
				}
				i=index1;
			}
			printf("%d\n",temp+1);
		}
		else if(a[i][0]>a[i][1])
		{
			for(i=n;i<=a[i][0];i++)
			{
				index1=i;
				index=0;
				while(i!=1)
				{
					if(i%2==0)
					{
						index++;
						i/=2;
					}
					else
					{
						index++;
						i=i*3+1;
					}
				}
				if(index>=temp)
				{
					temp=index;
				}
				i=index1;
			}
			printf("%d\n",temp+1);
		}
		i++;
	}
	return 0;
}
