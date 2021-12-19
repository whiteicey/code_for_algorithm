#include <stdio.h>
int main()
{
	void exchang(int* x,int* y,int* z);
	int a=3,b=6,c=5;
	int* a1,* b1,* c1;
	a1=&a;
	b1=&b;
	c1=&c;
	exchange(a1,b1,c1);
	printf("%d %d %d",a,b,c);
	return 0;
 } 
void exchange(int* x,int* y,int* z)
{
	int t;
	if(* x>* y)
	{
		t=* x;
		* x=* y;
		* y=t;
	}
	if(* y>* z)
	{
		t=* y;
		* y=* z;
		* z=t;
	}
}
