#include <stdio.h>
/*int main01()
{
	void printstar();
	printstar();
	printf("Hello World!\n");
	printstar();
	return 0;
 } 
 void printstar()
 {
	int i;
	for(i=0;i<5;i++)
	{
		printf("***********\n");
	}
 }
 int main02()
 {
 	int max(int x,int y);
 	int a=5,b=10;
 	int m;
 	m=max(a,b);
 	printf("%d",m);
 	return 0;
 }
 int max(int x,int y)
 {
 	int z;
 	z=x>y?x:y;
 	return z;
 }*/
void swap(int x,int y)
 {
 	int temp;
 	temp=x;
 	x=y;
 	y=temp;
 }
 int main()
 {
 	int a=5,b=10;
 	swap(a,b);
 	printf("%d %d",a,b);
 	return 0;
 }
