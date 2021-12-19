#include <stdio.h>
struct s
{
	int x;
	int y;
}data[4]={10,100,20,200,30,300,40,400};
int main()
{
	struct s * p=data;
	printf("%d ",++p->x);//++(p->x)
	printf("%d ",(++p)->y);
	printf("%d ",(p++)->x);
	printf("%d ",(p)->y++);
	return 0;
}
