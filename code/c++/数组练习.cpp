#include <stdio.h>
int main01()
{
	int arr[10];
	int temp;
	int i;
	for(i=0;i<10;i=i+1) 
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i=i+1)
	{
		if(temp<arr[1])
		{
			temp=arr[i];
		}
	 } 
	 printf("×îÖØ£º%d\n",temp);
	 return 0;
 } 
 
 
 
 int main()
 {
 	int arr[10]={1,2,3,6,768,654,3456,25,35,564};
 	int i,j;
 	int temp;
 	for(i=0;i<10;i=i+1)
	 {
	 	for(j=1;j<10;j=j+1)
	 	{
	 		if(arr[i]<arr[j])
	 		{
	 			temp=arr[i];
	 			arr[i]=arr[j];
	 			arr[j]=temp;
			 }
		 }
	  } 
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	  return 0;
}

