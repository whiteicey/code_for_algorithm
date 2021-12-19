#include <stdio.h>
int main()
{
	int i,j,k;
	for(i=2;i<=10;i=i+1)
	{
		k=1;
		for(j=2;j<i;j=j+1)
		{
			if(i%j==0)
			{ 
				k=2;
				break;
			}
		}
		if(k==1)
		{
		 	printf("%d\n",i);
	    }
	}
	return 0;
}
