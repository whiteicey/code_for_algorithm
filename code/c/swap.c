#include <stdio.h>
int main()
{
//	void swap(int* aptr,int* bptr);
	int a=5,b=6;
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
} 
void swap(int* aptr,int* bptr)
{
	int temp=* bptr;
	* bptr =* aptr;
	* aptr = temp;
}
