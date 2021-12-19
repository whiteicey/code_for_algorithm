#include <stdio.h>
int main()
{
	int a[1000];
	int index,j,i;
	//scanf("%d",&index);
	while((scanf("%d%d%d",&a[0],&a[1],&a[2]))!=EOF)
	{
		index=a[2];
		for(i=2;;i++)
		{
			a[i]=a[i-2]+a[i-1];
			if(a[i]>index)
			{
				break;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}
