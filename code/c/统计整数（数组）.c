#include <stdio.h>
int main()
{
	int a[80],i,k,j,b[80],a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a0=0;
	for(i=0;i<80;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==-1)
		{
			k=i;
			break;
		}
	}
	for(i=0;i<k;i++)
	{
		if(a[i]==1)
		{
			a1++;
		}
		else if(a[i]==2)
		{
			a2++;
		}
		else if(a[i]==3)
		{
			a3++;
		}
		else if(a[i]==4)
		{
			a4++;
		}
		else if(a[i]==5)
		{
			a5++;
		}
		else if(a[i]==6)
		{
			a6++;
		}
		else if(a[i]==7)
		{
			a7++;
		}
		else if(a[i]==8)
		{
			a8++;
		}
		else if(a[i]==9)
		{
			a9++;
		}
		else
		{
			a0++;
		}
	}
	printf("%d %d %d %d %d %d %d %d %d %d\n",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
	return 0;
}
