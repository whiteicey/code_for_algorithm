#include <stdio.h>
int main()
{
	int a=1;
	int* p=&a;
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%08x\n",&a);
	printf("%p\n",p);
	printf("%p\n",&p);
	return 0;
}
