#include <stdio.h>
int main01()
{
	int arr[10];
	arr[0]=123;
	arr[1]=234;
	arr[2]=345;
	arr[9]=8910;
	printf("%d\n",arr[1]);
	return 0;
}


int main02()
{
	int  arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	for (i=0;i<10;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
 } 
 
 
 
 int main()
 {
 	int arr[10]={1};
 	int i;
 	for(i=0;i<10;i=i+1)
 	printf("%d\n",arr[i]);
 	return 0;
 }
