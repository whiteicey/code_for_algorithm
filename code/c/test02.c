#include <stdio.h>
int main()
{
	char ac={0,1,2,3,4,5,6,7,8,9,};
	char* p=ac;
	printf("p=%p\n",p);
	printf("p+1=%p\n",p+1);
	int ai[]={0,1,2,3,4,5,6,7,8,9,};
	int* q=ai;
	printf("q=%p\n",q);
	printf("q=%p\n",q+1);
	return 0;
}
