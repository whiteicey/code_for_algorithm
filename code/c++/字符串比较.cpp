#include <stdio.h>
int main01()
{
	char arr1[]="hello world";
	char arr2[]="hella world";
	int i=0;
	while(arr1[i]==arr2[i])
	{
		if(arr1[i]=='\0')
		{
			printf("ͬ\n");
			return 0;
		}
		i=i+1;
	}
	printf("��ͬ\n"); 
	return 0; 
 } 
 
 
int main()
{
	char arr1[]="hello world";
	char arr2[]="hella world";
	int i=0;
	for(i=0;i<12;i=i+1)
	{
		if(arr1[i]==arr2[i])
		{
			printf("ͬ");
		}
		else
		{
			printf("��ͬ");
		}
    }
	return 0;
 }
