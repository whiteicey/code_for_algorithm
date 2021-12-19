#include <stdio.h>
/*int main()
{
	int i=0,j=0,max,c=0,r=0;
	int a[3][4]={{2,3,5,4},{5,7,9,20},{4,2,6,1}};
	max=a[0][0];
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(a[0][0]<a[i][j])
			{
				max=a[i][j];
				r=i;
				c=j;
			}
		}
	}
	printf("max=%d,ÐÐ£»%d,ÁÐ£»%d",a[i][j],r,c);
	return 0;
 } */
 int main()
 {
 	int i,j,row=0,colum=0,max;
 	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
 	max=a[0][0];
 	for(i=0;i<=2;i++)
 	{
 		for(j=0;j<=3;j++)
 		{
 			if(a[i][j]>max)
 			{
 				max=a[i][j];
 				row=i;
 				colum=j;
			 }
		 }
	 }
	 printf("%d\n%d\n%d\n",max,row,colum);
	 return 0;
 }

